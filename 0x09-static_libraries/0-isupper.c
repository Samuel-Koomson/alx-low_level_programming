#include "main.h"

/**
* _isupper - check whether character is it's upper case or not.
* @c: considers character in question.
*
* Return: 1 if the character is upper, or 0 if it's not.
*/

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
