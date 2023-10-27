/*
** EPITECH PROJECT, 2023
** MY_PRINTF
** File description:
** Initialize pointer functions for the printf
*/

#include <stdarg.h>
#include "include/my.h"

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

void print_pointer(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_p(va_arg(list, unsigned int));
}
