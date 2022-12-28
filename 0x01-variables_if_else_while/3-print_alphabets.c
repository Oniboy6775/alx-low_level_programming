#include <stdio.h>
/**
 * main - entry
 * Description - print alphabet in lower and upper case
 * Return: Always 0
 */
int main(void)
{
char start_lower = 'a';
char start_upper = 'A';
while (start_lower <= 'z')
{
putchar(start_lower);
start_lower++;
}
while (start_upper <= 'Z')
{
putchar(start_upper);
start_upper++;
}
putchar(10);
return (0);
}
