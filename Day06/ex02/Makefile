NAME = identify
SRC =  main.cpp Base.cpp
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