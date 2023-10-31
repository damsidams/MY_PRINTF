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

Test(utile, flag_x3, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %x\n", 999999996);
    cr_assert_eq(res, 27);
    cr_assert_stdout_eq_str("This is the first 3b9ac9fc\n");
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
    int res = my_printf("%s test: %X", "Another", 0);
    cr_assert_eq(res, 15);
    cr_assert_stdout_eq_str("Another test: 0");
}

Test(utile, flag_X3, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %X\n", 999999996);
    cr_assert_eq(res, 27);
    cr_assert_stdout_eq_str("This is the first 3B9AC9FC\n");
}

//----------- flag f ----------------//

Test(utile, flag_f, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %f\n", 42.0);
    cr_assert_eq(res, 28);
    cr_assert_stdout_eq_str("This is the first 42.000000\n");
}

Test(utile, flag_f2, .init=redirect_all_stdout)
{
    int res = my_printf("%s test: %f", "Another", -0.999945);
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("Another test: -0.999945");
}

Test(utile, flag_f3, .init=redirect_all_stdout)
{
    int res = my_printf("%s %s a neg%ftive number: %f\n", "Test", "w!t-", 4.0, -464.1);
    cr_assert_eq(res, 48);
    cr_assert_stdout_eq_str("Test w!t- a neg4.000000tive number: -464.100000\n");
}

Test(utile, flag_f4, .init=redirect_all_stdout)
{
    double MinValue = -1.7976931348623157E+308;
    int res = my_printf("This is the first %f\n", MinValue * 10);
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("This is the first -inf\n");
}

//----------- flag f ----------------//                                                                                                                                                                                                       

Test(utile, flag_F, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %F\n", 42.0);
    cr_assert_eq(res, 28);
    cr_assert_stdout_eq_str("This is the first 42.000000\n");
}

Test(utile, flag_F2, .init=redirect_all_stdout)
{
    int res = my_printf("%s test: %F", "Another", -0.999945);
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("Another test: -0.999945");
}

Test(utile, flag_F3, .init=redirect_all_stdout)
{
    int res = my_printf("%s %s a neg%Ftive number: %F\n", "Test", "w!t-", 4.0, -464.1);
    cr_assert_eq(res, 48);
    cr_assert_stdout_eq_str("Test w!t- a neg4.000000tive number: -464.100000\n");
}

Test(utile, flag_F4, .init=redirect_all_stdout)
{
    double MinValue = -1.7976931348623157E+308;
    int res = my_printf("This is the first %F\n", MinValue * 10);
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("This is the first -INF\n");
}

//---------- flag e ----------------//

Test(utile, flag_e1, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %e\n", 42.0);
    cr_assert_eq(res, 31);
    cr_assert_stdout_eq_str("This is the first 4.200000e+01\n");
}

Test(utile, flag_e2, .init=redirect_all_stdout)
{
    int res = my_printf("%s test: %e", "Another", -0.999945);
    cr_assert_eq(res, 27);
    cr_assert_stdout_eq_str("Another test: -9.999450e-01");
}

Test(utile, flag_e3, .init=redirect_all_stdout)
{
    int res = my_printf("%s %s a neg%etive number\n", "Test", "w!t-", 4.0);
    cr_assert_eq(res, 39);
    cr_assert_stdout_eq_str("Test w!t- a neg4.000000e+00tive number\n");
}

Test(utile, flag_e4, .init=redirect_all_stdout)
{
    double MinValue = -1.7976931348623157E+308;
    int res = my_printf("This is the first %e\n", MinValue * 10);
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("This is the first -inf\n");
}

//---------- flag E ----------------//                                                                                                                                                                                                        

Test(utile, flag_E1, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %E\n", 42.0);
    cr_assert_eq(res, 31);
    cr_assert_stdout_eq_str("This is the first 4.200000E+01\n");
}

Test(utile, flag_E2, .init=redirect_all_stdout)
{
    int res = my_printf("%s test: %E", "Another", -0.999945);
    cr_assert_eq(res, 27);
    cr_assert_stdout_eq_str("Another test: -9.999450E-01");
}

Test(utile, flag_E3, .init=redirect_all_stdout)
{
    int res = my_printf("%s %s a neg%Etive number\n", "Test", "w!t-", 4.0);
    cr_assert_eq(res, 39);
    cr_assert_stdout_eq_str("Test w!t- a neg4.000000E+00tive number\n");
}

Test(utile, flag_E4, .init=redirect_all_stdout)
{
    double MinValue = -1.7976931348623157E+308;
    int res = my_printf("This is the first %E\n", MinValue * 10);
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("This is the first -INF\n");
}

//---------- flag g ----------------//                                                                                                                                                                                                       

Test(utile, flag_g1, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %g\n", -25.999999999999);
    cr_assert_eq(res, 22);
    cr_assert_stdout_eq_str("This is the first -26\n");
}

Test(utile, flag_g2, .init=redirect_all_stdout)
{
    int res = my_printf("%s test: %g", "Another", -0.999945);
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("Another test: -0.999945");
}

Test(utile, flag_g3, .init=redirect_all_stdout)
{
    int res = my_printf("%s %s a neg%gtive number\n", "Test", "w!t-", -78196.467);
    cr_assert_eq(res, 35);
    cr_assert_stdout_eq_str("Test w!t- a neg-78196.5tive number\n");
} 

Test(utile, flag_g4, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %g\n", 42452657.789);
    cr_assert_eq(res, 30);
    cr_assert_stdout_eq_str("This is the first 4.24527e+07\n");
}

Test(utile, flag_g5, .init=redirect_all_stdout)
{
    int res = my_printf("%s test: %g", "Another", 0.0);
    cr_assert_eq(res, 15);
    cr_assert_stdout_eq_str("Another test: 0");
}

Test(utile, flag_g6, .init=redirect_all_stdout)
{
    int res = my_printf("%s %s a neg%gtive number\n", "Test", "w!t-", -489762.0);
    cr_assert_eq(res, 34);
    cr_assert_stdout_eq_str("Test w!t- a neg-489762tive number\n");
}

Test(utile, flag_g7, .init=redirect_all_stdout)
{
    double MinValue = 1.7976931348623157E+308;
    int res = my_printf("This is the first %g\n", MinValue * 10);
    cr_assert_eq(res, 22);
    cr_assert_stdout_eq_str("This is the first inf\n");
}

Test(utile, flag_g8, .init=redirect_all_stdout)
{
    double MinValue = -1.7976931348623157E+308;
    int res = my_printf("This is the first %g\n", MinValue * 10);
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("This is the first -inf\n");
}

//---------- flag g ----------------//                                                                                                                                                                                                        

Test(utile, flag_G1, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %G\n", -25.999999999999);
    cr_assert_eq(res, 22);
    cr_assert_stdout_eq_str("This is the first -26\n");
}

Test(utile, flag_G2, .init=redirect_all_stdout)
{
    int res = my_printf("%s test: %G", "Another", -0.999945);
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("Another test: -0.999945");
}

Test(utile, flag_G3, .init=redirect_all_stdout)
{
    int res = my_printf("%s %s a neg%Gtive number\n", "Test", "w!t-", -78196.467);
    cr_assert_eq(res, 35);
    cr_assert_stdout_eq_str("Test w!t- a neg-78196.5tive number\n");
}

Test(utile, flag_G4, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %G\n", 42452657.789);
    cr_assert_eq(res, 30);
    cr_assert_stdout_eq_str("This is the first 4.24527E+07\n");
}

Test(utile, flag_G5, .init=redirect_all_stdout)
{
    int res = my_printf("%s test: %G", "Another", 0.0);
    cr_assert_eq(res, 15);
    cr_assert_stdout_eq_str("Another test: 0");
}

Test(utile, flag_G6, .init=redirect_all_stdout)
{
    int res = my_printf("%s %s a neg%Gtive number\n", "Test", "w!t-", -489762.0);
    cr_assert_eq(res, 34);
    cr_assert_stdout_eq_str("Test w!t- a neg-489762tive number\n");
}

Test(utile, flag_G7, .init=redirect_all_stdout)
{
    double MinValue = 1.7976931348623157E+308;
    int res = my_printf("This is the first %G\n", MinValue * 10);
    cr_assert_eq(res, 22);
    cr_assert_stdout_eq_str("This is the first INF\n");
}

Test(utile, flag_G8, .init=redirect_all_stdout)
{
    double MinValue = -1.7976931348623157E+308;
    int res = my_printf("This is the first %G\n", MinValue * 10);
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("This is the first -INF\n");
}

//---------- flag a ----------------//add the inf test

Test(utile, flag_a1, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %a\n", -42.0);
    cr_assert_eq(res, 32);
    cr_assert_stdout_eq_str("This is the first -4.200000p+1\n");
}

Test(utile, flag_a2, .init=redirect_all_stdout)
{
    int res = my_printf("%s test: %a", "Another", -0.999945);
    cr_assert_eq(res, 27);
    cr_assert_stdout_eq_str("Another test: -9.999450p-1");
}

Test(utile, flag_a3, .init=redirect_all_stdout)
{
    int res = my_printf("%s %s a neg%ative number\n", "Test", "w!t-", 4.0);
    cr_assert_eq(res, 39);
    cr_assert_stdout_eq_str("Test w!t- a neg4.000000p+0tive number\n");
}

Test(utile, flag_a4, .init=redirect_all_stdout)
{
    double MinValue = -1.7976931348623157E+308;
    int res = my_printf("This is the first %a\n", MinValue * 10);
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("This is the first -inf\n");
}

//---------- flag A ----------------//add the inf test

Test(utile, flag_A1, .init=redirect_all_stdout)
{
    int res = my_printf("This is the first %A\n", 789.0);
    cr_assert_eq(res, 31);
    cr_assert_stdout_eq_str("This is the first 4.200000e+01\n");
}

Test(utile, flag_A2, .init=redirect_all_stdout)
{
    int res = my_printf("%s test: %A", "Another", -0.999945);
    cr_assert_eq(res, 27);
    cr_assert_stdout_eq_str("Another test: -9.999450e-01");
}

Test(utile, flag_A3, .init=redirect_all_stdout)
{
    int res = my_printf("%s %s a neg%Ative number\n", "Test", "w!t-", 4.0);
    cr_assert_eq(res, 39);
    cr_assert_stdout_eq_str("Test w!t- a neg4.000000e+00tive number\n");
}

Test(utile, flag_A4, .init=redirect_all_stdout)
{
    double MinValue = -1.7976931348623157E+308;
    int res = my_printf("This is the first %A\n", MinValue * 10);
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("This is the first -inf\n");
}

//---------- flag p ----------------//

Test(utile, flag_p, .init=redirect_all_stdout)
{
    int x = 50;
    int res = my_printf("This is the first %p\n", x);
    cr_assert_stdout_eq_str("This is the first ");
    my_put_nbr(&x);
    my_putchar('\n');
}

//---------- flag n ----------------//

Test(utile, flag_n, .init=redirect_all_stdout)
{
    int x;
    int res = my_printf("this is a flag%n n test", &x);
    cr_assert_eq(x, 14);
}

//------------ flag - ------------//

Test(utile, flag_minus1, .init=redirect_all_stdout)
{
    int res = my_printf("This is the: %-20f, %s", 789.16, "Hello");
    cr_assert_eq(res, 40);
    cr_assert_stdout_eq_str("This is the: 789.160000          , Hello");
}

Test(utile, flag_minus2, .init=redirect_all_stdout)
{
    int res = my_printf("What is the: %-0f, %s", 789.16, "Hello");
    cr_assert_eq(res, 30);
    cr_assert_stdout_eq_str("What is the: 789.160000, Hello");
}

Test(utile, flag_minus3, .init=redirect_all_stdout)
{
    int res = my_printf("%s %s a neg%Etive number\n", "Test", "w!t-", 4.0);
    cr_assert_eq(res, 39);
    cr_assert_stdout_eq_str("Test w!t- a neg4.000000E+00tive number\n");
}

Test(utile, flag_minus4, .init=redirect_all_stdout)
{
    double MinValue = -1.7976931348623157E+308;
    int res = my_printf("This is the first %E\n", MinValue * 10);
    cr_assert_eq(res, 23);
    cr_assert_stdout_eq_str("This is the first -INF\n");
}
