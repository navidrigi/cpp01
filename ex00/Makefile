CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
SRC			=	$(wildcard *.cpp)
NAME		=	zombie

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

.PHONY: all clean re

clean:
	rm -f $(NAME)

re: clean all
