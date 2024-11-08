NAME = megaphone
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = megaphone.cpp
SHELL = /bin/bash

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "✔ Compiled successfully"

clean:
	@rm -f $(NAME)
	@echo "✔ Cleaned successfully"

fclean: clean

re: fclean all

.PHONY: all clean fclean re