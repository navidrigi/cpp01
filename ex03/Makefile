CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -g
SRC			=	$(wildcard *.cpp)
NAME		=	weapon

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

.PHONY: all clean re

clean:
	rm -f $(NAME)

re: clean all
