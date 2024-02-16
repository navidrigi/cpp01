CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98
SRC			=	$(wildcard *.cpp)
NAME		=	sed

all: $(NAME)

$(NAME): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)

.PHONY: all clean re

clean:
	rm -f $(NAME) test.replace

re: clean all
