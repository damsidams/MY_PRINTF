/*
** EPITECH PROJECT, 2023
** MY PUT NBR
** File description:
** write an nbr given as a parameter and return the nb of char printed
*/

#include "include/my.h"

static void print_nb(int nb, int *nb_char_print)
{
    char res;

    if (nb / 10 > 0)
        print_nb(nb / 10, nb_char_print);
    res = (nb % 10) + '0';
    my_putchar(res);
    //printf("This is the nb at start of res: %d\n", nb_char_print);
    *nb_char_print += 1;
    //printf("This is the nb at the end of res: %d\n", nb_char_print);
}

int my_put_nbr(int nb)
{
    int nb_char_print = 0;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
        nb_char_print ++;
    }
    print_nb(nb, &nb_char_print);
    return nb_char_print;
}
