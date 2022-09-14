NAME = ex01

CPP = c++
CPP_FLAGS =  -Wall -Wextra -Werror -std=c++98
RM := rm -f

HEADER = ./ClapTrap.hpp ./ScavTrap.hpp

SRC = ./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CPP) $(CPP_FLAGS) $(OBJ) -o $(NAME)
	@echo "                                                         "
	@echo " \033[0;31m  ___|\033[0;32m   _ \ \033[0;33m   \  |\033[0;34m   _ \ \033[0;35m_ _|\033[0;36m  |   \033[0;31m   ____|\033[0;32m  __ \ \033[0;33m  | "
	@echo " \033[0;31m |    \033[0;32m  |   |\033[0;33m  |\/ |\033[0;34m  |   |\033[0;35m  | \033[0;36m  |   \033[0;31m   __|  \033[0;32m  |   |\033[0;33m  | "
	@echo " \033[0;31m |    \033[0;32m  |   |\033[0;33m  |   |\033[0;34m  ___/ \033[0;35m  | \033[0;36m  |   \033[0;31m   |    \033[0;32m  |   |\033[0;33m _| "
	@echo " \033[0;31m\____|\033[0;32m \___/ \033[0;33m _|  _|\033[0;34m _|    \033[0;35m___|\033[0;36m _____|\033[0;31m _____|\033[0;32m ____/ \033[0;33m _) \033[0m"
	@echo "                                                        "

$(OBJ): $(SRC)
	@$(CPP) -c $(CPP_FLAGS) $(SRC)

clean:
	@$(RM) $(OBJ)
	@echo "\033[0;33m removed object files!\033[0m"

fclean: clean
	@$(RM) $(NAME)
	@echo "\033[0;31m removed binary file!\033[0m"

re: fclean all