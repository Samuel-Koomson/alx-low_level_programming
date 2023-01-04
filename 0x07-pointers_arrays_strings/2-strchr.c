#include "main.h"

/**
* _strchr - fonction that locates a character in a string
* @s: First character
* @c: Second character
* Return: string or NULL
*/

char *_strchr(char *s, char c)
{
int a = 0;
int b;
while (s[a])
a++;
for (b = 0; b < a; b++)
{
if (c == s[b])
s += b;
return (s);
}
return ('\0');
}
