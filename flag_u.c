/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** displays the number given as a parameter
*/

#include "include/my.h"

static unsigned int last_digit
(unsigned int minflag, unsigned int nbsave, unsigned int *counter)
{
    if (nbsave >= 10){
        if (minflag == 1){
            my_putchar((nbsave % 10) + 1 + '0');
            (*counter) = (*counter) + 1;
        } else {
            my_putchar(nbsave % 10 + '0');
            (*counter) = (*counter) + 1;
        }
    }
    if (nbsave == 0){
        my_putchar(48);
    }
    return 0;
}

static unsigned int whilef
(unsigned int *count1, unsigned int count2,
    unsigned int nbsave, unsigned int minflag)
{
    unsigned int nb = nbsave;
    unsigned int counter = 0;

    while (nb > 0){
        if ((*count1 - 1) == count2){
            my_putchar(nb % 10 + '0');
            nb = nbsave;
            count2 = 0;
            *count1 = *count1 - 1;
            counter++;
        }
        nb = nb / 10;
        count2++;
    }
    last_digit(minflag, nbsave, &counter);
    return counter;
}

static unsigned int *while2(unsigned int *nb)
{
    unsigned int var = 0;
    unsigned int *count1 = &var;

    while (*nb > 0) {
        *nb = *nb / 10;
        *count1 = *count1 + 1;
    }
    return count1;
}

unsigned int flag_u(unsigned int nb)
{
    unsigned int count2 = 0;
    unsigned int nbsave = nb;
    unsigned int neg = 0;
    unsigned int minflag = 0;
    unsigned int value;

    value = whilef(while2(&nb), count2, nbsave, minflag);
    return value;
}
