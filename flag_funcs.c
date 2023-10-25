/*
** EPITECH PROJECT, 2023
** MY_PTINTF
** File description:
** Side functions to do what the flag should do
*/

#include "include/my.h"

/*handle the float flag*/
int flag_f(double nb)
{
    int nb_of_char = 0;
    int i = 0;
    int new_nb = 0;
    //printf("Here is i: %d, and nb: %f\n", i, nb);
    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    while (i < nb)
        i++;
    if (i == nb)
        return my_put_nbr(nb);
    nb_of_char = my_put_nbr(i - 1);
    //printf("Here is i: %d, and nb: %f\n", i, nb);
    nb = nb - (i - 1);
    //printf("this is the nb: %f\n", nb);
    i = 0;
    my_putchar('.');
    while (i < 6) {
        nb = nb * 10;
        //printf("This is nb lopp: %f\n", nb);
        for (int j = 0; j < nb; j++)
            new_nb = j;
        nb_of_char += my_put_nbr(new_nb);
        nb -= new_nb;
        i++;
    }
    //nb_of_char += my_put_nbr(nb) + 1;
    return nb_of_char;
}
/*
int flag_f(float nb)
{
    int nb_of_char = 0;
    int i = 0;
    int res;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    res = nb / 1;
    printf("This is res: %f\n", res);
    //if ((nb - res) == 0)
    //    return my_put_nbr(nb);
    nb_of_char = my_put_nbr(res);
    nb -= res;
    my_putchar('.');
    while (i < 6) {
        nb = nb * 10;
        res = nb / 1;
        nb_of_char += my_put_nbr(res);
        i ++;
    }
    return nb_of_char + 1;
}
*/
int flag_s(char *str)
{
    return my_putstr(str);
}

static int flag_e_printer(float nb, char pos, int base)
{
    int nb_of_char = 0;    

    nb_of_char = flag_f(nb);
    my_putchar('e');
    my_putchar(pos);
    if (base < 10)
        my_putchar('0');
    my_put_nbr(base);
    return nb_of_char;
}

int flag_e(float nb)
{
    int	base = 0;
    char pos = '+';

    while (nb > 10) {
        nb /= 10;
        base ++;
    }
    while (nb < 1) {
        pos = '-';
        nb *= 10;
        base ++;
    }
    return flag_e_printer(nb, pos, base) + 4;
}
