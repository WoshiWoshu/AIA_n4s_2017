##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Makefile
##

CC	=	gcc

RM	=	rm -f

CFLAGS	=	-Wall -Wextra

CPPFLAGS	+=	-I ./include

NAME	=	ai

SRC	=	free_arr.c		\
		my_str_to_word_array.c	\
		ai.c			\

OBJS	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
		$(CC) -o $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
