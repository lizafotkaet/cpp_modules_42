NAME = ./bsp

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCDIR = .
OBJDIR = obj

SOURCES = Fixed.cpp main.cpp Fixed.cpp Point.cpp bsp.cpp
HEADERS = Fixed.h Point.h
OBJECTS = $(addprefix $(OBJDIR)/,$(SOURCES:.cpp=.o))

all: $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(NAME): $(OBJDIR) $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJECTS)

$(OBJDIR)/%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


# with -I the compiler no longer knows which headers a .cpp depends on, 
# so edits to a header alone won't trigger a recompile (altho make re fixes this) 