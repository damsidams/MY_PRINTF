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
    switch (c){
    case 'd':
    case 'i':
        (*counter) = (*counter)	+ my_put_nbr(va_arg(list, int));
        break;
    case 's':
        (*counter) = (*counter)	+ my_putstr(va_arg(list, char *));
        break;
    case 'c':
        my_putchar(va_arg(list, int));
        (*counter) = (*counter)	+ 1;
        break;
    case '%':
        (*counter) = (*counter) + 1;
        my_putchar('%');
    break;
    default:
        my_putchar('%');
        my_putchar(c);
    }
}

int printf(const char *format, ...)
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
    return counter;
}
