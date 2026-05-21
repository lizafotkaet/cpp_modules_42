NAME = phonebook

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror

SRCDIR = .
OBJDIR = .

SOURCES = main.cpp Phonebook.cpp Contact.cpp
HEADERS = Phonebook.hpp Contact.hpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJECTS)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re