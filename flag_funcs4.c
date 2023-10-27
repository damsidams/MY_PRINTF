/*
** EPITECH PROJECT, 2023
** MY_PRINTF
** File description:
** Side functions to do what the flag should do
*/

#include "include/my.h"

int is_inf(double nb)
{
    double MaxValue = 1.7976931348623157E+308;

    if (nb >= MaxValue * 10)
	return 1;
    return 0;
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

int flag_a(double nb)
{
    int base = 0;
    char pos = '+';
    int is_it_neg = 0;

    nb = is_neg(nb, &is_it_neg);
    if (is_inf(nb))
        return my_putstr("inf") + is_it_neg;
    while (nb > 10) {
        nb /= 10;
	base ++;
    }
    while (nb < 1) {
        pos = '-';
	nb *= 10;
        base ++;
    }
    return flag_e_printer(nb, pos, base) + 4 + is_it_neg;
}
