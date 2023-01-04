#include "main.h"

/**
* _strchr - Function that locates first occurrence of a character in a string
* @s: string
* @c: first character occurrence
* Return: string or NULL
*/

char *_strchr(char *s, char c)
{
int y = 0;
for (; s[y] > -'\0'; y++)
{
if (s[y] == c)
return (&s[y]);
}
return (0);
}
