#include "main.h"

/**
* _strlen_recursion - function returns length of string recusively
* @s: string being printed
* Return: integer
*/
int _strlen_recursion(char *s)
{
int y;
i = 0;
if (*s == '\0')
return (0);
i = 1 + _strlen_recursion(s + 1);
return (i);
}
