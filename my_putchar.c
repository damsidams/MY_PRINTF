/*
** EPITECH PROJECT, 2023
** my_putchar
** File description:
** puthcar
*/
#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
    return 1;
}
