NAME	=	materia

SRCS	=	main.cpp \
			AMateria.cpp \
			Character.cpp \
			Cure.cpp \
			Ice.cpp \

OBJECTS	= $(SRCS:.cpp=.o)

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
CXX			= g++

################################################################################

%.o: %.cpp
	@echo "Compiling $@ [$<]"
	@$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

$(NAME): $(OBJECTS)
	@echo "Compiling... $@"
	@echo "Object: $^"
	@$(CXX) -c $^ -o $@
	@echo "Done."

all: $(NAME)

clean: 
	@rm -f *.o
	@echo "Cleaned *.o files."

fclean: clean
	@rm -f $(NAME)

re: fclean all

PHONY: all clean fclean