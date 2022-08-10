CPPFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = harlFilter

SRC = main.cpp Harl.cpp 
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	c++ -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean $(NAME)