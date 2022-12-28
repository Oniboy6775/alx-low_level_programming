#include <stdio.h>
/**
 * main - entry point
 * Description - prints all combinations of single-digit numbers
 * Return: Always 0;
 */
int main(void)
{
	int a;
for (a = 48; a <= 57; a++)
{
putchar(a);
if (a == 57)
continue;
else
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
