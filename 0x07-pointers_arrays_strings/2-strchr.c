#include "main.h"

/**
* _strchr - fonction that locates a character in a string
* @s: First character
* @c: Second character
* Return: string or NULL
*/

char *_strchr(char *s, char c)
{
int a;
while (1)
{
a = *s++;
if (a == c)
{
return (s - 1);
}
if (a == 0)
{
return (NULL);
}
}
}
