#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - entry point
 * Description - This prints the last digit of the number
 * Return: Always 0
 */
int main(void)
{
	int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
else if (n == 0)
printf("Last digit of %d is %d and is 0\n", n, n % 10);
else if (n < 6 && n != 0)
printf("Last dgit of %d is %d and less than 6 and not 0\n", n, n % 10);
return (0);
}