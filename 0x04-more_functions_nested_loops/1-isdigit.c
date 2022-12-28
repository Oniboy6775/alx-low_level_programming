#include "main.h"
#include <ctype.h>
/**
 * _isdigit - entry
 * @c: character to check
 * Description - functioon to check if the c is digit
 * Return: 1 if true 0 otherwise
 */
int _isdigit(int c)
{
if (isdigit(c))
return (1);
else
return (0);
}
