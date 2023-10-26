/*
** EPITECH PROJECT, 2023
** MY_PRINTF
** File description:
** Header file for all the function pointers
*/

#include <stdarg.h>

#ifndef P_FUNCTION_H
    #define P_FUNCTION_H
void print_float(va_list list, int *counter);
void print_ffloat(va_list list, int *counter);
void print_floatP(va_list list, int *counter);
void print_ffloatP(va_list list, int *counter);
#endif /* P_FUNCTION_H */
