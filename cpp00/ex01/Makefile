NAME = phonebook

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror

RED = \033[31m
GREEN = \033[32m
YELLOW = \033[33m
BLUE = \033[34m
RESET = \033[0m

SRCDIR = .
OBJDIR = .

SOURCES = main.cpp PhoneBook.cpp Contact.cpp
HEADERS = PhoneBook.hpp Contact.hpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJECTS)
	@printf "$(GREEN)\nExecutable: $(NAME)$(RESET)\n"
	@rm -f .compile_started

%.o: %.cpp $(HEADERS)
	@if [ ! -f .compile_started ]; then printf "$(YELLOW)Compiling$(RESET)"; touch .compile_started; fi
	@printf "$(BLUE).$(RESET)"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	@printf "$(WHITE)Removing object files$(RESET)"
	@for obj in $(OBJECTS); do printf "."; rm -f $$obj; done
	@printf "\n"

fclean: clean
	@rm -f $(NAME)
	@printf "$(RED)Removed the executable!$(RESET)\n"

re: fclean all

.PHONY: all clean fclean re