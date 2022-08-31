NAME = Phonebook
SRCSDIR = .
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = phonebook.cpp main.cpp contact.cpp
	
$(NAME): $(SRCSDIR)/$(SRCS)
	@echo "Compiling... $@"
	@g++ $(CFLAGS) -o $@ $^
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