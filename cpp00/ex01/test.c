#include <stdio.h>
#include <fcntl.h>

int main(){
	char buff[10];
	// int	fd = open("test.txt", O_RDONLY);
	// printf("Enter text: ");
	FILE *file = fopen("test.txt", "r");
	fgets(buff, 10, file);
	

	printf("You typed: %s", buff);

	return 0;
}
