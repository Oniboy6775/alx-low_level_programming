#include <stdio.h>
/**
 * _putchar -  initialize my code
 *@arg1:the cahracter
 *Description - external putchar
 *Return: - Always int.
 */
int _putchar(char arg1);
/**
 *print_alphabet_x10 - check the code
 *_putchar - replace putchar
 *Description - A function that prints the english alphabet
 *Return: - Always 0.
*/

void print_alphabet_x10(void)
{
char alphabet;
int i;
for (i = 0; i < 10; i++)
{
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
_putchar(alphabet);
}
}
