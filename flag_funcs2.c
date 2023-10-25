/*
** EPITECH PROJECT, 2023
** flag_funcs2
** File description:
** this file contains some of the flag funcs
*/

#include "include/my.h"

/* flag u function */
static unsigned int print_nb(unsigned int nb, unsigned int nb_char_print)
{
    char res;

    if (nb / 10 > 0)
        nb_char_print += print_nb(nb / 10, nb_char_print);
    res = (nb % 10) + '0';
    my_putchar(res);
    nb_char_print ++;
    return nb_char_print;
}

unsigned int flag_u(unsigned int nb)
{
    int nb_char_print = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
        nb_char_print ++;
    }
    nb_char_print = print_nb(nb, nb_char_print);
    return nb_char_print;
}

unsigned int flag_o(unsigned int i)
{
    unsigned int rest = 0;
    unsigned int quot = 0;
    unsigned int nbr = 0;

    if (i <= 0)
        return 0;
    rest = i % 8;
    quot = (i - rest) / 8;
    nbr += 1 + flag_o(quot);
    my_put_nbr(rest);
    return nbr;
}
