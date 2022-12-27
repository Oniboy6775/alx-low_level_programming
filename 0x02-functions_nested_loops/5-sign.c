#include <stdio.h>
/**
 * print_sign - let u print sign according to condition
 * @n: the number argument
 * Description - Print out +, - or (0)
 * Return: return 1 if greater, 0 if n is 0 and return -1 if less than
*/
int print_sign(int n)
{
if (n == 0)
{
return (0);
printf("0");
}
else if (n > 0)
{
return (1);
printf("+");
}
else
{
return (-1);
printf("-");
}
}
