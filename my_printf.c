/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** reproduce basic printf behavior
*/

#include <stdarg.h>
#include "include/my_print.h"

void cases(char c, va_list list, int *counter)
{
    void (*fun_ptr_arr[128])(char, va_list, int *) = {0};

    (*fun_ptr_arr['d'])(char, va_list, int *) = my_put_nbr;
    (*fun_ptr_arr['i'])(char, va_list, int *) = my_put_nbr;
    (*fun_ptr_arr['s'])(char, va_list, int *) = my_put_str;
    (*fun_ptr_arr['c'])(char, va_list, int *) = my_putchar;
    (*fun_ptr_arr['%'])(char, va_list, int *) = my_putchar;

    if ((*fun_ptr_arr[c]) != 0)
        (*counter) = (*fun_ptr_arr[c])(va_arg(list, int));
    else {
        my_putchar(c);
        (*counter) ++;
    }
        





/*switch (c){
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
        }*/
}

int my_printf(const char *format, ...)
{
    va_list list;
    int counter;

    va_start(list, format);
    while (*format) {
        if (*format == '%'){
            format++;
            cases(*format, list, &counter);
        } else {
            counter++;
            my_putchar(*format);
        }
        format++;
    }
    my_put_nbr(counter);
    return counter;
}
