#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 * Description - A function that prints the english alphabet
 * Return - Always 0.
*/

void print_alphabet(void)
{
char arr_char[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
int i;
for (i = 0; arr_char[i]; i++)
{
printf("%c", arr_char[i]);
}
putchar(10);
}