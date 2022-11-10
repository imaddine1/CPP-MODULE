NAME = phonebook
SRC = PhoneBook.cpp
CPPFLAGS = -Wall -Wextra -Werror
OBJ = $(SRC:.cpp=.o)
VER = -std=c++98

all: $(NAME)

$(NAME) : $(OBJ)
	c++ $(CPPFLAGS) $(VER) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all
  
