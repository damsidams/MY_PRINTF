/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** reproduce basic printf behavior
*/

#include <stdarg.h>
#include "include/my.h"
#include "include/p_function.h"

static int cases(char c, va_list list, int *counter)
{
    void (*functions[])(va_list list, int *counter) =
        {
            print_int, print_string,
            print_char, print_percent, print_int,
            print_octal, print_unsigned, print_hex,
            print_hexx, print_float, print_ffloat,
            print_float_e, print_ffloat_ee, print_thegflag,
            print_theggflag, print_n, print_pointer,
            print_a, print_aa};
    char *base = "dsc%iouxXfFeEgGnpaA";

    for (int i = 0; base[i] != '\0'; i++){
        if (base[i] == c){
            functions[i](list, counter);
            return 0;
        }
    }
    *counter += my_putchar('%');
    *counter += my_putchar(c);
    return 0;
}

int my_printf(const char *format, ...)
{
    va_list list;
    int counter;
    char next_letter = *format;

    va_start(list, format);
    while (*format){
        next_letter = (*format) + 1;
        if (*format == '%' && next_letter != '\0'){
            format++;
            cases(*format, list, &counter);
        } else {
            counter += my_putchar(*format);
        }
        format++;
    }
    va_end(list);
    return counter;
}
