/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** reproduce basic printf behavior
*/

#include <stdarg.h>
#include "include/my.h"
#include "include/p_function.h"

static void print_thegflag(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_g(va_arg(list, double));
}

static void print_theggflag(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_gg(va_arg(list, double));
}

void cases(char c, va_list list, int *counter)
{
    void (*functions[])(va_list list, int *counter) =
        {
            print_int, print_string,
            print_char, print_percent, print_int,
            print_octal, print_unsigned, print_hex,
            print_hexx, print_float, print_ffloat,
            print_float_e, print_ffloat_ee, print_thegflag,
            print_theggflag
        };
    char *base = "dsc%iouxXfFeEgG";

    for (int i = 0; base[i] != '\0'; i++){
        if (base[i] == c){
            functions[i](list, counter);
        }
    }
}

int my_printf(const char *format, ...)
{
    va_list list;
    int counter;

    va_start(list, format);
    while (*format){
        if (*format == '%'){
            format++;
            cases(*format, list, &counter);
        } else {
            counter++;
            my_putchar(*format);
        }
        format++;
    }
    va_end(list);
    return counter;
}
