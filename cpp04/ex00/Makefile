NAME = ./Polymorphism

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror #-std=c++17 

SRCDIR = src
INCDIR = inc
OBJDIR = obj

FILES = main.cpp Animal.cpp WrongAnimal.cpp Cat.cpp WrongCat.cpp Dog.cpp
HDRS = Animal.h Cat.h Dog.h WrongAnimal.h WrongCat.h

SRC = $(addprefix $(SRCDIR)/, $(FILES))
HEADERS = $(addprefix $(INCDIR)/, $(HDRS))
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