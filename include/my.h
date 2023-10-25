/*
** EPITECH PROJECT, 2023
** my
** File description:
** got all prototype of my lib
*/

#ifndef MY_H
    #define MY_H
int my_printf(const char *format, ...);
int my_put_nbr(int nb);
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
#endif /* MY_H */
