/*
** EPITECH PROJECT, 2023
** flag_o
** File description:
** case of flag o
*/

#include "include/my.h"

int flag_o(int i)
{
    int rest = 0;
    int quot = 0;
    int nbr = 0;

    if (i <= 0)
        return 0;
    rest = i % 8;
    quot = (i - rest) / 8;
    nbr += 1 + flag_o(quot);
    my_put_nbr(rest);
    return nbr;
}
