NAME = account
CC = c++
CFLAGS = -Wall -Wextra -Werror
SRC = Account.cpp \
	tests.cpp \

all: $(NAME)

$(NAME): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "✔ Compiled successfully"

98: $(SRC)
	@$(CC) $(CFLAGS) -std=c++98 $(SRC) -o $(NAME)
	@echo "✔ Compiled successfully"

clean:
	@rm -f $(NAME)
	@echo "✔ Cleaned successfully"

fclean: clean

re: fclean all

.PHONY: all clean fclean re
