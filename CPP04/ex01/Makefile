NAME = a.out
SRCSDIR = .
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Animal.cpp Brain.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp
	
$(NAME): $(SRCSDIR)/$(SRCS)
	@echo "Compiling... $@"
	@g++-7 $(CFLAGS) -o $@ $^
	@echo "Done."

all: $(NAME)

fclean: clean
	@rm -f $(NAME)
	@echo "Everything is ready to compile."

clean: 
	@rm -f *.o
	@echo "Cleaned *.o files."

re: fclean all

PHONY: all clean fclean