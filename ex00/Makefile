CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
NAME		=	zombie

all : $(NAME)

$(NAME) :
	$(CXX) $(CXXFLAGS) -o $(NAME)

.phony: all clean re

clean :
	rm -f $(NAME)

re: clean all
