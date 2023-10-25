/*
** EPITECH PROJECT, 2023
** flag_x
** File description:
** convert to hexadecmal
*/

#include "include/my.h"

void printingX_part2(unsigned int i)
{
    switch (i){
    case 13:
        my_putchar('D');
        break;
    case 14:
        my_putchar('E');
        break;
    case 15:
        my_putchar('F');
        break;
    default:
        my_put_nbr(i);
    }
}

void printingX_part1(unsigned int i)
{
    switch (i){
    case 10:
        my_putchar('A');
        break;
    case 11:
        my_putchar('B');
        break;
    case 12:
        my_putchar('C');
        break;
    }
    if (i > 12 || i < 10)
        printingX_part2(i);
}

unsigned int flag_X(unsigned int i)
{
    unsigned int rest = 0;
    unsigned int quot = 0;
    unsigned int count = 0;
    unsigned int nbr = 0;

    if (i == 0)
        return 0;
    rest = i % 16;
    quot = (i - quot) / 16;
    nbr += 1 + flag_X(quot);
    printingX_part1(rest);
    return nbr;
}

int main()
{
    flag_X(255);
    return 0;
}
