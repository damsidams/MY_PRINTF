/*
** EPITECH PROJECT, 2023
** flag_o
** File description:
** case of flag o
*/

#include "include/my.h"

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
