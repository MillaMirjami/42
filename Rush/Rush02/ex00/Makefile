NAME = rush-02 
CC = gcc
FLAGS  = -Wall -Wextra -Werror
SRCS = main.c utils.c read_numbers.c
OBJS = ${SRCS:.c=.o}
RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS) 
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	
clean :
	$(RM) $(OBJS) 

fclean : clean
	$(RM) $(NAME)

.PHONY: all clean fclean
