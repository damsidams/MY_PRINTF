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

static float flag_f_assist(float nb, int *nb_of_char, int *i)
{
    if (nb < 0) {
        nb *= -1;
        *nb_of_char += 1;
    }
    while (*i < nb) {
	*i += 1;
    }
    return nb;
}

static int flag_f_without_print(double nb)
{
    int nb_of_char = 0;
    int i = 0;
    int new_nb = 0;

    nb = flag_f_assist(nb, &nb_of_char, &i);
    if (i == nb)
        return nb_size(nb, 0);
    nb_of_char += nb_size(i - 1, 0);
    nb = nb - (i - 1);
    i = 0;
    while (i < 6) {
	nb = nb * 10;
        for (int j = 0; j < nb; j++)
            new_nb = j;
        nb_of_char += nb_size(new_nb, 0);
        nb -= new_nb;
        i++;
    }
    return nb_of_char + 1;
}

