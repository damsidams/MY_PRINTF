/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** reproduce basic printf behavior
*/

#include <stdarg.h>
#include "include/my.h"

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
