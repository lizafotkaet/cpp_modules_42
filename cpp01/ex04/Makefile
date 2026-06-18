NAME = ./replace

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror

SRCDIR = .
OBJDIR = obj

SOURCES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp
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