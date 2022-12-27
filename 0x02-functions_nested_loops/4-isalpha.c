#include <stdio.h>
#include <ctype.h>
/**
 * _isalpha - Entry point
 * @c: the character itself
 * Description - The function to check if letter, lower or uppercase
 * Return: Alwat 1 if true and 0 if otherwise
 */
int _isalpha(int c)
{
if (isalpha(c) || islower(c) || isupper(c))
return (1);
else
return (0);
}
