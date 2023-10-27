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
void my_putchar(char c);
int my_putstr(char const *str);
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
void print_int(va_list list, int *counter);
void print_string(va_list list, int *counter);
void print_char(va_list list, int *counter);
void print_percent(va_list list, int *counter);
void print_octal(va_list list, int *counter);
void print_unsigned(va_list list, int *counter);
void print_hex(va_list list, int *counter);
void print_hexx(va_list list, int *counter);
void print_float(va_list list, int *counter);
void print_ffloat(va_list list, int *counter);
void print_floatP(va_list list, int *counter);
void print_ffloatP(va_list list, int *counter);
int flag_g(float nb);
int flag_gg(float nb);
void flag_n(int *i, int nb);
int flag_p(unsigned int *i);
float is_neg(float nb, int *nb_of_char);
#endif /* MY_H */
