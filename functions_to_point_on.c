/*
** EPITECH PROJECT, 2023
** functions_to_point_on
** File description:
** storge of functions to point on
*/

#include "include/my.h"
#include <stdarg.h>

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
