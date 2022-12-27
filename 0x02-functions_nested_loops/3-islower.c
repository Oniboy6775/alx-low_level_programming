#include <stdio.h>
#include <ctype.h>
/**
 * _islower - to check if the character is lower case
 * @c: the character to check
 * Description - This is a function to check lower case letters
 * Return: Always 1 if lower and 0 if oherwise
*/

/**
 * checkLower - to check a lower case letter
 * @c: the character to check
 * Description - This is a function to check lower case letters
 * Return: Always 1 if lower and 0 if oherwise
 */
int _islower(int c)
{
if (islower(c))
return (1);
else
return (0);
}
