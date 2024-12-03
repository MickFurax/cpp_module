NAME = nowItsWeird
CPP = c++
CFLAGS = -Wall -Wextra -Werror
SRC = ClapTrap/ClapTrap.cpp \
	ScavTrap/ScavTrap.cpp \
	FragTrap/FragTrap.cpp \
	DiamondTrap/DiamondTrap.cpp \
	main.cpp \

all: $(NAME)

$(NAME): $(SRC)
	@$(CPP) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "✔ Compiled successfully"

98: $(SRC)
	@$(CPP) $(CFLAGS) -std=c++98 $(SRC) -o $(NAME)
	@echo "✔ Compiled successfully"

clean:
	@echo "✔ Cleaned successfully"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
