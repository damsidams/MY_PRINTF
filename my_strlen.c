/*
** EPITECH PROJECT, 2023
** MY_PRINTF
** File description:
** Returns the length of a string
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i])
        i++;
    return i;
}
