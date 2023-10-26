/*
** EPITECH PROJECT, 2023
** function_to_point_on2
** File description:
** second functions to point on
*/

#include "include/my.h"
#include <stdarg.h>

void print_int(va_list list, int *counter)
{
    (*counter) = (*counter) + my_put_nbr(va_arg(list, int));
}

void print_octal(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_o(va_arg(list, unsigned int));
}

void print_unsigned(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_u(va_arg(list, unsigned int));
}

void print_hex(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_x(va_arg(list, unsigned int));
}

void print_hexx(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_xx(va_arg(list, unsigned int));
}
