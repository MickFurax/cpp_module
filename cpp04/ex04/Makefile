NAME = interfaceAndRecap
CPP = c++
CFLAGS = -Wall -Wextra -Werror
SRC = Materia/AMateria.cpp \
	Materia/Ice/Ice.cpp \
	Materia/Cure/Cure.cpp \
	MateriaSource/MateriaSource.cpp \
	Character/Character.cpp \
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
