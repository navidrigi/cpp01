CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
SRC			=	main.cpp
				Zombie.cpp
NAME		=	zombie

all : $(NAME)

$(NAME) :
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

.phony: all clean re

clean :
	rm -f $(NAME)

re: clean all
