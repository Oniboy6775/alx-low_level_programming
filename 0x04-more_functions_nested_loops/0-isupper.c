#include "main.h"
#include <ctype.h>
/**
 * _issupper - entry
 * @c: the character
 * Description - The function check if uppercase
 * Return: 1 if true 0 if othewise
 */
int _issupper(int c)
{
if (isupper(c))
return (1);
else
return (0);
}
