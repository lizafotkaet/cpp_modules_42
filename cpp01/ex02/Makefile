NAME = ./hithisisbrain
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): main.cpp
	$(CXX) $(CXXFLAGS) -o $(NAME) main.cpp

clean:
fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
