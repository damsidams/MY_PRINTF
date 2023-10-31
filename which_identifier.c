/*
** EPITECH PROJECT, 2023
** MY_PRINTF
** File description:
** File to run the flag characters
*/

int which_char_flag(char char_flag, char normal_flag)
{
    char *flags = "0+ #-";
    int i = 0;

    while(flags[i] && flags[i] != char_flag)
        i++;
    if (flags[i] == '\0')
        return -1;
    if (i <= 3)
        return i;
    if (normal_flag == 'd' || normal_flag == 'i')
        return i;
    return i + 1;
}

int flag_zero(double nb, char flag, int size)
{
    return 0;
}
/*
static int print_float(va_list listr, char char_flag, float precision)
{
    double arg = va_arg(list, double);
    char flag = f;
    int (*flag_char_func[])(double, char, int) =
    {
        flag_zero, flag_plus, flag_blan, flag_hashtag, flag_minus_int,
        flag_minus_double
    };
    if (wich_char_flag() >= 0)
        (*counter) += flag_char_func[wich_char_flag](arg, flag, (int)precision);
    return flag_f(arg);
}
*/
