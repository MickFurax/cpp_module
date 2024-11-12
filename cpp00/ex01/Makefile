NAME = phonebook
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = Contact/Contact.cpp \
	PhoneBook/PhoneBook.cpp \
	main.cpp \

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