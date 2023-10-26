/*
** EPITECH PROJECT, 2023
** function_to_point_on2
** File description:
** third functions to point on
*/

#include <stdarg.h>
#include "include/my.h"

void print_float(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_f(va_arg(list, double));
}

void print_ffloat(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_ff(va_arg(list, double));
}

void print_floatP(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_e(va_arg(list, double));
}

void print_ffloatP(va_list list, int *counter)
{
    (*counter) = (*counter) + flag_ee(va_arg(list, double));
}
