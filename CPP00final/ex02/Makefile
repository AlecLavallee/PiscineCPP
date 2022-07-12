NAME = MyAwesomeJob
SRCS = Account.cpp \
	tests.cpp 
OBJS = $(SRCS:.cpp=.o)
CC = c++
CFLAGS = -Wall -Wextra -Werror
CPP = -std=c++98
RM = rm -rf

.PHONY: all clean fclean re
all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(FLAGS) $(CPP) -o $(NAME) $(OBJS) -I.

%.o: %.cpp
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all