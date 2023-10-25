/*
** EPITECH PROJECT, 2023
** flag_x
** File description:
** convert to hexadecmal
*/

#include "include/my.h"

void printing_part2(unsigned int i)
{
    switch (i){
    case 13:
        my_putchar('d');
        break;
    case 14:
        my_putchar('e');
        break;
    case 15:
        my_putchar('f');
        break;
    default:
        my_put_nbr(i);
    }
}

void printing_part1(unsigned int i)
{
    switch (i){
    case 10:
        my_putchar('a');
        break;
    case 11:
        my_putchar('b');
        break;
    case 12:
        my_putchar('c');
        break;
    }
    if (i > 12 || i < 10)
        printing_part2(i);
}

int flag_x(unsigned int i)
{
    unsigned int rest = 0;
    unsigned int quot = 0;
    unsigned int count = 0;
    unsigned int nbr = 0;

    if (i == 0)
        return 0;
    rest = i % 16;
    quot = (i - quot) / 16;
    nbr += 1 + flag_x(quot);
    printing_part1(rest);
    return nbr;
}
