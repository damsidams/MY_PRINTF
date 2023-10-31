/*
** EPITECH PROJECT, 2023
** MY_PRINTF
** File description:
** Initialize pointer functions for the printf
*/

#include <stdarg.h>
#include "include/my.h"

int print_n(va_list list, char char_flag, int bprecision, int afprecision)
{
    //flag_n(va_arg(list, *int), (*counter));
    return 0; 
}

int print_a(va_list list, char char_flag, int bprecision, int afprecision)
{
    int nb_of_char = 0;
    double arg = va_arg(list, double);
    char flag = 'a';
    int (*flag_char_func[])(double, char, int) =
    {
        flag_zero, flag_plus, flag_blank, flag_hashtag, flag_minus_int,
        flag_minus_double
    };
    if (which_char_flag(char_flag, flag) >= 0)
        nb_of_char += flag_char_func[which_char_flag(char_flag, flag)](arg, flag, bprecision);
    if (char_flag == '-')
        return nb_of_char;
    return nb_of_char + flag_a(arg);
}

int print_aa(va_list list, char char_flag, int bprecision, int afprecision)
{
    int nb_of_char = 0;
    double arg = va_arg(list, double);
    char flag = 'A';
    int (*flag_char_func[])(double, char, int) =
    {
        flag_zero, flag_plus, flag_blank, flag_hashtag, flag_minus_int,
        flag_minus_double
    };
    if (which_char_flag(char_flag, flag) >= 0)
        nb_of_char += flag_char_func[which_char_flag(char_flag, flag)](arg, flag, bprecision);
    if (char_flag == '-')
        return nb_of_char;
    return nb_of_char + flag_aa(arg);
}
