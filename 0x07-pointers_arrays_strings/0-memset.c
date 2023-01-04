#include "main.h"

/**
 _memset - This memory set function
* @s: a string
* @b: a character
* @n: an integer
* Return: a string
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int a;
for (a = 0; a < n; a++)
s[a] = b;
return (s);
}
