#include <stdio.h>
/**
 * main - entry
 * Description - This is my descriptiom
 * Return: always 0
 */
int main(void)
{	char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
if (alpha == 'q' || alpha == 'e')
putchar(0);
else
putchar(alpha);
}
printf("\n");
return (0);
}
