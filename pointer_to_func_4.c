/*
** EPITECH PROJECT, 2023
** MY_PRINTF
** File description:
** Initialize pointer functions for the printf
*/

#include <stdarg.h>
#include "include/my.h"

void print_n(va_list list, int *counter)
{
    flag_n(va_arg(list, int *), (*counter));
}

void print_a(va_list list, int *counter)
{
    flag_a(va_arg(list, double));
}

void print_aa(va_list list, int *counter)
{
    flag_aa(va_arg(list, double));
}
