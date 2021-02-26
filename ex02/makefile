NAME=array
INCLUDES=./includes
FLAGS=-Wall -Wextra -Werror -std=c++98 -pedantic-errors
CC=clang++

HEADERS=\
	includes/array.tpp

FILES=\
	main.cpp

OBJS=$(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) $(HEADERS)
	$(CC) -I $(INCLUDES) $(FLAGS) -o $(NAME) $(OBJS)

%.o: %.cpp $(HEADERS)
	$(CC) -I $(INCLUDES) $(FLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
