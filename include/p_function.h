/*
** EPITECH PROJECT, 2023
** MY_PRINTF
** File description:
** Header file for all the function pointers
*/

#include <stdarg.h>

#ifndef P_FUNCTION_H
    #define P_FUNCTION_H
void print_string(va_list list, int *counter);
void print_char(va_list list, int *counter);
void print_percent(va_list list, int *counter);
void print_octal(va_list list, int *counter);
void print_unsigned(va_list list, int *counter);
void print_hex(va_list list, int *counter);
void print_hexx(va_list list, int *counter);
void print_float(va_list list, int *counter);
void print_ffloat(va_list list, int *counter);
void print_float_e(va_list list, int *counter);
void print_ffloat_ee(va_list list, int *counter);
void print_int(va_list list, int *counter);
void print_thegflag(va_list list, int *counter);
void print_theggflag(va_list list, int *counter);
#endif /* P_FUNCTION_H */
