NAME = ./DiamondTrap

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++17 #-Wshadow #-Wnoshadow

SRCDIR = src
INCDIR = inc
OBJDIR = obj

SRC =	$(SRCDIR)/main.cpp $(SRCDIR)/ClapTrap.cpp $(SRCDIR)/ScavTrap.cpp $(SRCDIR)/FragTrap.cpp \
			$(SRCDIR)/DiamondTrap.cpp
HEADERS = $(INCDIR)/ClapTrap.h $(INCDIR)/ScavTrap.h $(INCDIR)/FragTrap.h $(INCDIR)/DiamondTrap.h
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