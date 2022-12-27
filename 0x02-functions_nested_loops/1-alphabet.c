#include <stdio.h>
/**
 * print_alphabet - check the code
 * _putchar - replace putchar
 * Description - A function that prints the english alphabet
 * Return - Always 0.
*/
/*
 * _putchar - replace putchar
 * Description - external putchar
 * Return = Always 0.
 */
int _putchar(char);
void print_alphabet(void)
{
  char alphabet;
  for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}
_putchar(10);
}
