NAME = PhoneBook
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = PhoneBook.cpp Contact.cpp
INCLUDES = PhoneBook.hpp
OBJ = $(SRCS:.cpp=.o)


.cpp.o:
	g++ -c $< -o $@
	
$(NAME): $(OBJ)
	c++ $(CFLAGS) -o $(OBJ) -I$(INCLUDES) $(NAME)

all: $(NAME)

fclean:
	rm -f $(NAME) $(OBJ)
	@echo "Cleaned"

clean: 
	rm -f $(OBJ)
	@echo "Cleaned *.o"

re: fclean all

PHONY: all clean fclean