#include <stdio.h>
/**
 * main - entry point
 * Description - This is hexadecimal characters
 * Return: always 0
 */
int main(void)
{
	int a;
	int b = 97;
for (a = 48; a <= 57; a++)
putchar(a);
while (b <= 102)
{
putchar(b);
b++;
}
putchar(10);
return (0);
}
