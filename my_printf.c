/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** reproduce basic printf behavior
*/

#include <stdarg.h>
#include "include/my.h"
#include "include/p_function.h"

static int cases(char c, va_list list, char identifier, int *precisions)
{
    //printf("The Flag is : %c\n", c);
    //printf("The Identifier is : %c\n", identifier);
    //printf("The Precision is : %d.%d\n", precisions[0], precisions[1]);
    int (*functions[])(va_list list, char identifier, int precisions1, int precisions2) =
        {
            print_int, print_string,
            print_char, print_percent, print_int,
            print_octal, print_unsigned, print_hex,
            print_hexx, print_float, print_ffloat,
            print_float_e, print_ffloat_ee, print_thegflag,
            print_theggflag, print_n, print_pointer,
            print_a, print_aa};
    char *base = "dsc%iouxXfFeEgGnpaA";

    for (int i = 0; base[i] != '\0'; i++){
        if (base[i] == c){
            return functions[i](list, identifier, precisions[0], precisions[1]);
        }
    }
    my_putchar('%');
    my_putchar(c);
    return 2;
}

static int precisions(const char *c, va_list list, int *counter, char identifier)
{
    int res[2];

    while (my_char_isnum(*c) == 1){
        res[0] = res[0] * 10 + (*c - '0');
        c++;
    }
    if (*c == '.')
        c++;
    while (my_char_isnum(*c) == 1){
        res[1] = res[1] + ((float)(*c - '0'));
        c++;
    }
    *counter = *counter + cases(*c, list, identifier, res);
    return 0;
}

static int format_identifiers(const char *c, va_list list, int *counter)
{
    char *base = "-0+ #";

    for (int i = 0; base[i] != '\0'; i++){
        if (base[i] == *c){
            c++;
            precisions(c, list, counter, base[i]);
            return 0;
        }
    }
    precisions(c, list, counter, 0);
    return 1;
}

int my_printf(const char *format, ...)
{
    va_list list;
    int counter;
    char next_letter = *format;

    va_start(list, format);
    while (*format){
        next_letter = (*format) + 1;
        if (*format == '%' && next_letter != '\0'){
            format_identifiers(format, list, &counter);
            //cases(*format, list, &counter);
        } else {
            counter += my_putchar(*format);
        }
        if (next_letter != '\0')
            format++;
    }
    va_end(list);
    return counter;
}
