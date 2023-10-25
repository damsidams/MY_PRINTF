/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** reproduce basic printf behavior
*/

#include <stdarg.h>
#include "include/my.h"

void print_int(va_list list, int *counter)
{
    (*counter) = (*counter) + my_put_nbr(va_arg(list, int));
}

void print_string(va_list list, int *counter)
{
    (*counter) = (*counter) + my_putstr(va_arg(list, char *));
}

void print_char(va_list list, int *counter)
{
    my_putchar(va_arg(list, int));
    (*counter) = (*counter) + 1;
}

void print_percent(va_list list, int *counter)
{
    (*counter) = (*counter) + 1;                                                                     
    my_putchar('%');
}

void cases(char c, va_list list, int *counter)
{
    void (*functions[])(va_list list, int *counter) =
        {print_int, print_string,
        print_char, print_percent};
    char *base = "dsc%";
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
