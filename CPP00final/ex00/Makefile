SRCS = megaphone.cpp
OBJS = megaphone.o
RM = rm -rf
CC = c++
CFLAGS = -Wall -Werror -Wextra
STD = -std=c++98
NAME = Megaphone

.PHONY = all re clean fclean
all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(STD) -o $@ $(OBJS) -I.

%.o:%.cpp
	$(CC) $(CFLAGS) $(STD) -c $(SRCS)

clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)