#include <stdio.h>
/**
 * _putchar -  initialize my code
 *@arg1:the cahracter
 * Description - external putchar
 *
 * Return: - Always int.
 */
int _putchar(char arg1);
/**
 * print_alphabet - check the code
 * _putchar - replace putchar
 * Description - A function that prints the english alphabet
 * Return: - Always 0.
 */
void print_alphabet(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
printf("\n");
}
