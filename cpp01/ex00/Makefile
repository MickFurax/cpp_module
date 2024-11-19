NAME = braiiiiiiinnnzzzz
CC = c++
CFLAGS = -Wall -Wextra -Werror
SRC = Zombie/Zombie.cpp \
	newZombie.cpp \
	randomChump.cpp \
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
