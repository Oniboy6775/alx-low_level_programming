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
continue;
else
putchar(alpha);
}
putchar(10);
return (0);
}
