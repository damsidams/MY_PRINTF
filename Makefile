##
## EPITECH PROJECT, 2023
## makefile
## File description:
## my first make file
##

SRC     =       my_putchar.c    \
                my_put_nbr.c    \
                my_putstr.c     \
                my_printf.c     \
		flag_funcs.c	\
		flag_funcs2.c	\
		flag_x.c	\
		flag_xx.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

LIB	=	/include/

LIBNAME	=	my.h

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

$(NAME):	$(OBJ)
	gcc -c $(SRC) -I $(LIB)
	ar rc $(NAME) $(OBJ)
	$(clean)
	$(fclean)
