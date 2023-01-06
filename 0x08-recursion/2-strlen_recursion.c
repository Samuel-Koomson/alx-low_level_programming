#include "main.h"

/**
* _strlen_recursion - function returns length of string recusively
* @s: string being printed
* Return: integer
*/
int _strlen_recursion(char *s)
{
int y;
y = 0;
if (*s == '\0')
return (0);
y = 1 + _strlen_recursion(s + 1);
return (y);
}
