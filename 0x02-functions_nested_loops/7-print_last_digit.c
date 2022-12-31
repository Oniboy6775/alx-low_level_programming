#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_last_digit - entry point
 * @num: the number to check its last digit
 * Description - check the last digit of a number
 * Return: Always return the last digit
 */
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
last_digit *= -1;
_putchar(last_digit + '0');
return (last_digit);
}
