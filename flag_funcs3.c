/*
** EPITECH PROJECT, 2023
** MY_PRINTF
** File description:
** Contains some of the flags need by the main function
*/

#include "include/my.h"

int nb_size(int nb, int nb_char_print)
{
    char res;
    
    if (nb < 0) {
	nb *= -1;
        nb_char_print ++;
    }
    if (nb / 10 > 0)
        nb_char_print += nb_size(nb / 10, nb_char_print);
    nb_char_print ++;
    return nb_char_print;
}

//does the same as printf but removes the useless zeros after the digits
static int flag_f_no_print_zero(double nb)
{
    int nb_of_char = 0;
    int int_part = (int)nb;
    float temp = 0;

    if (int_part == nb)
        return my_put_nbr(nb);
    nb_of_char += my_put_nbr(int_part);
    my_putchar('.');
    nb -= int_part;
    nb *= 1000000;
    temp = nb * 10;
    int_part = (int)nb;
    if ((int)temp % 10 > 4)
        int_part += 1;
    while (int_part % 10 == 0)
        int_part /= 10;
    nb_of_char += my_put_nbr(int_part);
    return nb_of_char + 1;
}

static int flag_e_no_print_zeros(float nb)
{
    return 0;
}

//looks like the e prints only the int part + 4 digits everytime except when there are zeros
int flag_g(float nb)
{
    int nb_of_char = 0;
    
    if (nb < 0) {
        my_putchar('-');
        nb_of_char ++;
        nb *= -1;
    }
    if (nb_size((int)nb, 0) < 6)
        return flag_f_no_print_zero(nb) + nb_of_char;
    
}
