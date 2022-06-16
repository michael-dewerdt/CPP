NAME = megaphone
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = megaphone.cpp
OBJ = $(SRCS:.cpp=.o)


.cpp.o:
	g++ -c $< -o $@
	
$(NAME): $(OBJ)
	c++ $(CFLAGS) -o $(OBJ) $(NAME)

all: $(NAME)

fclean:
	rm -f $(NAME) $(OBJ)
	@echo "Cleaned"

clean: 
	rm -f $(OBJ)
	@echo "Cleaned *.o"

re: fclean all

PHONY: all clean fclean