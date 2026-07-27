NAME = ./ClapTrap

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror

SRCDIR = src
INCDIR = inc
OBJDIR = obj

SRC =	$(SRCDIR)/main.cpp $(SRCDIR)/ClapTrap.cpp
HEADERS = $(INCDIR)/ClapTrap.h
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SRC))

all: $(NAME)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJECTS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(HEADERS) | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -I$(INCDIR) -c $< -o $@

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


# # with -I the compiler no longer knows which headers a .cpp depends on, 
# # so edits to a header alone won't trigger a recompile (altho make re fixes this) 
