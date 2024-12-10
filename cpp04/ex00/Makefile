NAME = polymorphism
CPP = c++
CFLAGS = -Wall -Wextra -Werror
SRC = Animal/Animal.cpp \
	Animal/Cat/Cat.cpp \
	Animal/Dog/Dog.cpp \
	Animal/WrongAnimal.cpp \
	Animal/WrongCat/WrongCat.cpp \
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
