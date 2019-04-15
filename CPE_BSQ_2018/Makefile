##
## EPITECH PROJECT, 2018
## my_printf
## File description:
## reproduce printf function
##

SRC			=	src/bsq.c			\
				src/parsing_map.c	\
				src/main.c

OBJ			=	$(SRC:.c=.o)

NAME		=	bsq

CFLAGS		=	-g -Iinclude -Llib -lmy -Wall -Wextra

all:	$(NAME)

$(NAME):	$(OBJ)
	cd lib/my/ && make
	gcc $(OBJ) -o $(NAME) $(CFLAGS)

clean:
	rm $(OBJ)

fclean:	clean
	rm $(NAME)

re: fclean all