NAME = virtual
SRC =  main.cpp Animal.cpp  Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
OBJ = $(SRC:.cpp=.o)


all: $(NAME)

$(NAME) : $(OBJ)
	c++  $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all