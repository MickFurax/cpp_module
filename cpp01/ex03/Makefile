NAME = unnecessaryviolence
CC = c++
CFLAGS = -Wall -Wextra -Werror
SRC = Weapon/Weapon.cpp \
	HumanA/HumanA.cpp \
	HumanB/HumanB.cpp \
	main.cpp \

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "✔ Compiled successfully"

98: $(SRC)
	@$(CC) $(CFLAGS) -std=c++98 $(SRC) -o $(NAME)
	@echo "✔ Compiled successfully"

clean:
	@echo "✔ Cleaned successfully"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
