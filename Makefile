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
		flag_funcs3.c    \
		flag_x.c	\
		flag_xx.c	\
		my_printf.c	\
		pointer_to_func_1.c	\
		pointer_to_func_2.c	\
		pointer_to_func_3.c	\
		pointer_to_func_4.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

LIB	=	/include/

LIBNAME	=	my.h

all:	$(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:     fclean all

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	$(clean)
	$(fclean)
