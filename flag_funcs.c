/*
** EPITECH PROJECT, 2023
** MY_PTINTF
** File description:
** Side functions to do what the flag should do
*/

#include "include/my.h"

/*handle the float flag*/
int flag_f(float nb)
{
    int nb_of_char = 0;
    int i = 0;

    while (i < nb)
        i++;
    if (i == nb)
        return my_put_nbr(nb);
    nb_of_char = my_put_nbr(i - 1);
    nb = nb - (i - 1);
    nb = nb * 1000000;
    my_putchar('.');
    nb_of_char += my_put_nbr(nb + 1) + 1;
    printf("Here is the nb returned %d\n", nb_of_char);
    return nb_of_char;
}
