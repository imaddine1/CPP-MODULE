NAME = phonebook
SRC = PhoneBook.cpp Contact.cpp
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
OBJ = $(SRC:.cpp=.o)
VER = -std=c++98

all: $(NAME)

$(NAME) : $(OBJ)
	c++  $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re: fclean all
  
