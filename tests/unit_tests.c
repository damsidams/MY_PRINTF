/*
** EPITECH PROJECT, 2023
** Unit test criterion
** File description:
** unit tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"
#include "../include/p_function.h"
#include <stdio.h>

//gcc my_printf.c my_putchar.c my_putstr.c my_put_nbr.c flag_funcs.c flag_funcs2.c flag_x.c tests/unit_tests.c flag_xx.c flag_funcs3.c pointer_to_func_2.c pointer_to_func_1.c pointer_to_func_3.c --coverage -lcriterion
//gcc my_printf.c my_putchar.c my_putstr.c my_put_nbr.c flag_funcs.c flag_funcs2.c flag_x.c tests/main_test_flag.c flag_xx.c flag_funcs3.c pointer_to_func_2.c pointer_to_func_1.c pointer_to_func_3.c

/*
// Passes if Expression is true
cr_assert ( Expression , FormatString , ...) ;
// Passes if Expression is false
cr_assert_not ( Expression , FormatString , ...) ;
// Passes if Actual == Expected
cr_assert_eq ( Actual , Expected , FormatString , ...) ;
// Passes if Actual != Expected
cr_assert_neq ( Actual , Expected , FormatString , ...) ;
check err output
cr_assert_stderr_eq_str("cat: random: No such file or directory\n");
*/

void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

//------------flag d --------------//
Test(utile, flag_d, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first test (test : %d)\n", 1);
    cr_assert_eq(res, 34);
    cr_assert_stdout_eq_str("This is the first test (test : 1)\n");
}

Test(utile, flag_d2, .init=redirect_all_stdout)
{
    int res = my_printf("Another test: %d", 0);
    cr_assert_eq(res, 15);
    cr_assert_stdout_eq_str("Another test: 0");
}

Test(utile, flag_d3, .init=redirect_all_stdout)
{
    int res = my_printf("Test with a neg%dtive number: %d\n", 4, -46426);
    cr_assert_eq(res, 36);
    cr_assert_stdout_eq_str("Test with a neg4tive number: -46426\n");
}

//--------------flag s ---------//
Test(utile, flag_s, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %s\n", "test");
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("This is the first test\n");
}

Test(utile, flag_s2, .init=redirect_all_stdout)
{
    int res = my_printf("%s test: %d", "Another", 0);
    cr_assert_eq(res, 15);
    cr_assert_stdout_eq_str("Another test: 0");
}

Test(utile, flag_s3, .init=redirect_all_stdout)
{
    int res = my_printf("%s %s a neg%dtive number: %d\n", "Test", "w!t-", 4, -46426);
    cr_assert_eq(res, 36);
    cr_assert_stdout_eq_str("Test w!t- a neg4tive number: -46426\n");
}

//---------------- flag c -----------//

Test(utile, flag_c, .init=redirect_all_stdout)
{
    int res = my_printf("This %cs the first %s\n", 'i', "test");
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("This is the first test\n");
}

Test(utile, flag_c2, .init=redirect_all_stdout)
{
    int res = my_printf("%s t%cst: %d", "Another", '3', 0);
    cr_assert_eq(res, 15);
    cr_assert_stdout_eq_str("Another t3st: 0");
}

Test(utile, flag_c3, .init=redirect_all_stdout)
{
    int res = my_printf("%s %s a neg%dtive n%cmber: %d\n", "Test", "w!t-", 4, 'U',  -46426);
    cr_assert_eq(res, 36);
    cr_assert_stdout_eq_str("Test w!t- a neg4tive nUmber: -46426\n");
}

//---------------- flag % ----------//

Test(utile, flag_pourcent, .init=redirect_all_stdout)
{
    int res = my_printf("This %cs the %% first %s\n", 'i', "test");
    cr_assert_eq(res, 25);
    cr_assert_stdout_eq_str("This is the % first test\n");
}

Test(utile, flag_pourcent2, .init=redirect_all_stdout)
{
    int res = my_printf("%s t%cst: %d%%", "Another", '3', 0);
    cr_assert_eq(res, 16);
    cr_assert_stdout_eq_str("Another t3st: 0%");
}

//------------------flag i ------------//

Test(utile, flag_i, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %i\n", 3 * -2);
    cr_assert_eq(res, 21);
    cr_assert_stdout_eq_str("This is the first -6\n");
}

Test(utile, flag_i2, .init=redirect_all_stdout)
{
    int res = my_printf("%s test: %i", "Another", 48 - 7);
    cr_assert_eq(res, 16);
    cr_assert_stdout_eq_str("Another test: 41");
}

Test(utile, flag_i3, .init=redirect_all_stdout)
{
    int res = my_printf("%s %s a neg%itive number: %d\n", "Test", "w!t-", -2 * -2, -46426);
    cr_assert_eq(res, 36);
    cr_assert_stdout_eq_str("Test w!t- a neg4tive number: -46426\n");
}

//-----------------flag o ------------//

Test(utile, flag_o, .init=redirect_all_stdout)
{
    int res = my_printf("This is (octal nbr: %o) the first %i\n", 789, 3 * -2);
    cr_assert_eq(res, 39);
    cr_assert_stdout_eq_str("This is (octal nbr: 1425) the first -6\n");
}

Test(utile, flag_o2, .init=redirect_all_stdout)
{
    int res = my_printf("%s test: %o", "Another", 0);
    cr_assert_eq(res, 15);
    cr_assert_stdout_eq_str("Another test: 0");
}

//------------ flag u ----------//

Test(utile, flag_u, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %u\n", 7789);
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("This is the first 7789\n");
}

Test(utile, flag_u2, .init=redirect_all_stdout)
{
    int res = my_printf("%s test: %u", "Another", 0);
    cr_assert_eq(res, 15);
    cr_assert_stdout_eq_str("Another test: 0");
}

//---------------- flag x ----------------//

Test(utile, flag_x, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %x\n", 7789);
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("This is the first 1e6d\n");
}

Test(utile, flag_x2, .init=redirect_all_stdout)
{
    int res = my_printf("%s test: %x", "Another", 0);
    cr_assert_eq(res, 15);
    cr_assert_stdout_eq_str("Another test: 0");
}

//------------- flag X ----------------//

Test(utile, flag_X, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %X\n", 7789);
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("This is the first 1E6D\n");
}

Test(utile, flag_X2, .init=redirect_all_stdout)
{
    int res = my_printf("%s test: %x", "Another", 0);
    cr_assert_eq(res, 15);
    cr_assert_stdout_eq_str("Another test: 0");
}
