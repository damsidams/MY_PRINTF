/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** displays the number given as a parameter
*/

#include "include/my.h"

static int last_digit(int minflag, int nbsave, int *counter)
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

static int whilef(int *count1, int count2, int nbsave, int minflag)
{
    int nb = nbsave;
    int counter = 0;

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

static int negchar(int neg)
{
    if (neg == 1) {
        my_putchar('-');
    }
    return 0;
}

static int *while2(int *nb)
{
    int var = 0;
    int *count1 = &var;

    while (*nb > 0) {
        *nb = *nb / 10;
        *count1 = *count1 + 1;
    }
    return count1;
}

int my_put_nbr(int nb)
{
    int count2 = 0;
    int nbsave = nb;
    int neg = 0;
    int minflag = 0;
    int value;

    if (nb == -2147483648){
        nb = 2147483647;
        minflag = 1;
        neg = 1;
        nbsave = nb;
    }
    if (nb < 0){
        neg = 1;
        nb = nb * (-1);
        nbsave = nb;
    }
    negchar(neg);
    value = whilef(while2(&nb), count2, nbsave, minflag);
    return value;
}
