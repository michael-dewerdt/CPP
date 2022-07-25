SRCS			= main.cpp NewZombie.cpp randomChump.cpp Zombie.cpp
OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS		= -Wall -Wextra -Werror  -std=c++98 -I.

NAME			= Zombie

.cpp .o:
	$(CXX) $(CXXFLAGS) $(SRCS) -o $@
all:			$(NAME)

$(NAME):		$(OBJS)
				$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re