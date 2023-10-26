/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** reproduce basic printf behavior
*/

#include <stdarg.h>
#include "include/my.h"

static void print_int(va_list list, int *counter)
{
    (*counter) = (*counter) + my_put_nbr(va_arg(list, int));
}

static void print_string(va_list list, int *counter)
{
    (*counter) = (*counter) + my_putstr(va_arg(list, char *));
}

static void print_char(va_list list, int *counter)
{
    my_putchar(va_arg(list, int));
    (*counter) = (*counter) + 1;
}

static void print_percent(va_list list, int *counter)
{
    (*counter) = (*counter) + 1;                                                                     
    my_putchar('%');
}

static void print_octal(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_o(va_arg(list, unsigned int));
}

static void print_unsigned(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_u(va_arg(list, unsigned int));
}

static void print_hex(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_x(va_arg(list, unsigned int));
}

static void print_hexx(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_xx(va_arg(list, unsigned int));
}

static void print_float(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_f(va_arg(list, double));
}

static void print_ffloat(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_ff(va_arg(list, double));
}

static void print_floatP(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_e(va_arg(list, double));
}

static void print_ffloatP(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_ee(va_arg(list, double));
}

void cases(char c, va_list list, int *counter)
{
    void (*functions[])(va_list list, int *counter) =
        {print_int, print_string,
         print_char, print_percent, print_int,
         print_octal, print_unsigned, print_hex,
         print_hexx, print_float, print_ffloat,
         print_floatP, print_ffloatP};
    char *base = "dsc%iouxXfFeE";

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
