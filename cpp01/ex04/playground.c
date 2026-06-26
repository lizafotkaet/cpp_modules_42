#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* length-aware search: find needle in hay starting at `from`, or -1 */
static long find_sub(const char *hay, size_t h,
                     const char *ned, size_t n, size_t from)
{
    if (n == 0 || n > h)
        return -1;
    for (size_t i = from; i + n <= h; i++)
        if (memcmp(hay + i, ned, n) == 0)
            return (long)i;
    return -1;
}

static char *replace_all(const char *src, size_t slen,
                         const char *s1, size_t l1,
                         const char *s2, size_t l2, size_t *out_len)
{
    size_t count = 0;
    long   pos = 0, f;

    /* pass 1: count matches */
    while ((f = find_sub(src, slen, s1, l1, (size_t)pos)) != -1) {
        count++;
        pos = f + (long)l1;
    }

    /* safe with size_t: count*l1 <= slen always */
    size_t new_len = slen - count * l1 + count * l2;
    char  *dst = malloc(new_len + 1);
    if (!dst)
        return NULL;

    /* pass 2: build output */
    size_t di = 0, si = 0;
    while ((f = find_sub(src, slen, s1, l1, si)) != -1) {
        size_t chunk = (size_t)f - si;
        memcpy(dst + di, src + si, chunk); di += chunk;
        memcpy(dst + di, s2, l2);          di += l2;
        si = (size_t)f + l1;
    }
    memcpy(dst + di, src + si, slen - si); di += slen - si;
    dst[di] = '\0';
    *out_len = di;
    return dst;
}

static char *read_file(const char *path, size_t *len)
{
    FILE *fp = fopen(path, "rb");
    if (!fp)
        return NULL;
    if (fseek(fp, 0, SEEK_END) != 0) { fclose(fp); return NULL; }
    long sz = ftell(fp);
    if (sz < 0) { fclose(fp); return NULL; }
    rewind(fp);

    char *buf = malloc((size_t)sz + 1);
    if (!buf) { fclose(fp); return NULL; }
    size_t rd = fread(buf, 1, (size_t)sz, fp);
    fclose(fp);
    buf[rd] = '\0';
    *len = rd;
    return buf;
}

int main(int argc, char **argv)
{
    if (argc != 4) {
        fprintf(stderr, "Usage: %s <filename> <s1> <s2>\n", argv[0]);
        return 1;
    }
    if (argv[2][0] == '\0') {
        fprintf(stderr, "Error: s1 cannot be empty\n");
        return 1;
    }

    size_t slen;
    char *src = read_file(argv[1], &slen);
    if (!src) {
        fprintf(stderr, "Error: cannot read file %s\n", argv[1]);
        return 1;
    }

    size_t outlen;
    char *out = replace_all(src, slen, argv[2], strlen(argv[2]),
                            argv[3], strlen(argv[3]), &outlen);
    free(src);
    if (!out) {
        fprintf(stderr, "Error: allocation failed\n");
        return 1;
    }

    /* ".replace" is 8 chars + null = 9 bytes */
    size_t plen = strlen(argv[1]);
    char *outpath = malloc(plen + 9);
    if (!outpath) { free(out); return 1; }
    memcpy(outpath, argv[1], plen);
    memcpy(outpath + plen, ".replace", 9);

    FILE *fp = fopen(outpath, "wb");
    if (!fp) {
        fprintf(stderr, "Error: cannot create %s\n", outpath);
        free(out); free(outpath);
        return 1;
    }
    fwrite(out, 1, outlen, fp);
    fclose(fp);

    free(out);
    free(outpath);
    return 0;
}