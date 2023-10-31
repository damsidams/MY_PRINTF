/*
** EPITECH PROJECT, 2023
** PRINTF
** File description:
** Initializes pointers functions for the printf
*/

#include <stdarg.h>
#include "include/my.h"

//replace nb by va_list and va_arg
int print_float(va_list list, char char_flag, int bprecision, int afprecision)
{
    int nb_of_char = 0;
    double arg = va_arg(list, double);
    char flag = 'f';
    int (*flag_char_func[])(double, char, int) =
    {
        flag_zero, flag_plus, flag_blank, flag_hashtag, flag_minus_int,
        flag_minus_double
    };
    if (which_char_flag(char_flag, flag) >= 0)
        nb_of_char += flag_char_func[which_char_flag(char_flag, flag)](arg, flag, bprecision);
    if (char_flag == '-')
        return nb_of_char;
    return flag_f(arg) + nb_of_char;
}

int print_ffloat(va_list list, char char_flag, int bprecision, int afprecision)
{
    int nb_of_char = 0;
    double arg = va_arg(list, double);
    char flag = 'F';
    int (*flag_char_func[])(double, char, int) =
    {
        flag_zero, flag_plus, flag_blank, flag_hashtag, flag_minus_int,
        flag_minus_double
    };
    if (which_char_flag(char_flag, flag) >= 0)
        nb_of_char += flag_char_func[which_char_flag(char_flag, flag)](arg, flag, bprecision);
    if (char_flag == '-')
	return nb_of_char;
    return nb_of_char + flag_ff(arg);
}

int print_float_e(va_list list, char char_flag, int bprecision, int afprecision)
{
    int nb_of_char = 0;
    double arg = va_arg(list, double);
    char flag = 'e';
    int (*flag_char_func[])(double, char, int) =
    {
        flag_zero, flag_plus, flag_blank, flag_hashtag, flag_minus_int,
        flag_minus_double
    };
    if (which_char_flag(char_flag, flag) >= 0)
        nb_of_char += flag_char_func[which_char_flag(char_flag, flag)](arg, flag, bprecision);
    if (char_flag == '-')
        return nb_of_char;
    return nb_of_char + flag_e(arg);
}

int print_ffloat_ee(va_list list, char char_flag, int bprecision, int afprecision)
{
    int nb_of_char = 0;
    double arg = va_arg(list, double);
    char flag = 'E';
    int (*flag_char_func[])(double, char, int) =
    {
        flag_zero, flag_plus, flag_blank, flag_hashtag, flag_minus_int,
        flag_minus_double
    };
    if (which_char_flag(char_flag, flag) >= 0)
        nb_of_char += flag_char_func[which_char_flag(char_flag, flag)](arg, flag, bprecision);
    if (char_flag == '-')
        return nb_of_char;
    return nb_of_char + flag_ee(arg);
}

//change arg to va_list, va_arg
int print_int(va_list list, char char_flag, int bprecision, int afprecision)
{
    int nb_of_char = 0;
    int arg = va_arg(list, int);
    char flag = 'd';
    int (*flag_char_func[])(double, char, int) =
    {
        flag_zero, flag_plus, flag_blank, flag_hashtag, flag_minus_int,
        flag_minus_double
    };
    if (which_char_flag(char_flag, flag) >= 0) {
        if (char_flag == '-')
            return flag_char_func[which_char_flag(char_flag, flag)](arg, flag, bprecision);
	nb_of_char += flag_char_func[which_char_flag(char_flag, flag)]((double)arg, flag, bprecision);
    }
    return nb_of_char + my_put_nbr(arg);
}
