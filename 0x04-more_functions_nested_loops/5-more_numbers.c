#include "stdio.h"
/**
 * more_numbers - entry
 * Description - Prints 1 - 14 10x
 * Return: void
 */
void main(void)
{
	int i, j;
for (i = 1; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
_putchar('1');
_putchar(j % 10 + '0');
}
_putchar('\n');
}
}