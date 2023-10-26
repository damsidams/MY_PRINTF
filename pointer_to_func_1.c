/*
** EPITECH PROJECT, 2023
** MY_PRINTF
** File description:
** Initialize pointer functions for the printf (flag : s, c, %)
*/

#include <stdarg.h>
#include "include/my.h"
#include "include/p_function.h"

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

void print_thegflag(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_g(va_arg(list, double));
}

void print_theggflag(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_gg(va_arg(list, double));
}
