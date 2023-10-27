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
