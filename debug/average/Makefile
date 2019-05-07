##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Compile the project
##

CC	=	gcc

SRC	=	easy_debug.c

OBJ	=	$(SRC:.c=.o)

RM	=	rm -f

NAME	=	debug

CFLAGS	=	-I./include

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(CFLAGS)

clean:
		$(RM) $(OBJ)

fclean:	clean
		$(RM) $(NAME)

re:	fclean all
