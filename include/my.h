/*
** EPITECH PROJECT, 2023
** my
** File description:
** got all prototype of my lib
*/

#include <stdarg.h>

#ifndef MY_H
    #define MY_H
int my_printf(const char *format, ...);
int my_put_nbr(int nb);
int my_put_nbr_base(int nb, int base);
int my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int flag_f(double nb);
int flag_ff(double nb);
int flag_s(char *str);
int flag_e(float nb);
int flag_ee(float nb);
unsigned int flag_o(unsigned int i);
unsigned int flag_u(unsigned int nb);
unsigned int flag_x(unsigned int i);
unsigned int flag_xx(unsigned int i);
int nb_size(int nb, int nb_char_print);
int flag_g(double nb);
int flag_gg(double nb);
void flag_n(int *i, int nb);
unsigned int flag_p(int *i);
int flag_a(double nb);
int flag_aa(double nb);
double is_neg(double nb, int *nb_of_char);
int is_inf(double nb);
int flag_zero(double nb, char flag, int size);
int flag_hashtag(double nb, char flag, int size);
int flag_plus(double nb, char flag, int size);
int flag_blank(double nb, char flag, int size);
int flag_minus_int(double nb, char flag, int size);
int flag_minus_double(double nb, char flag, int size);
int which_char_flag(char char_flag, char normal_flag);
int my_char_isnum(char const c);
#endif /* MY_H */
