#include <stdio.h>
/**
 * main - entry point
 * Description - Tis is the function that prints alphabet
 * Return: Always 0
 */
int main(void)
{
	char start = 'a';
while (start <= 'z')
{
putchar(start);
start++;
}
putchar(10);
return (0);
}
