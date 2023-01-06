#include "main.h"
int isPalRec(char *s, int x, int y);

/**
 * is_palindrome - function that returns palindrome string
 * @s: string
 * Return: integer
 */
int is_palindrome(char *s)
{
int n = _strlen_recursion(s);
if (n == 0)
return (1);
return (isPalRec(s, 0, n - 1));
}

/**
 * isPalRec - helper function to is_palindrome
 * @s: string
 * @x: int number
 * @y: second integer
 * Return: 1 if true else  0 if false
 */
int isPalRec(char *s, int x, int y)
{
if (num == y)
return (1);
if (s[x] != s[y])
return (0);
if (x < y + 1)
return (isPalRec(s, x + 1, y - 1));
return (1);
}

/**
 * _strlen_recursion - return length of string
 * @s: string
 * Return: string
 */
int _strlen_recursion(char *s)
{
int k;
k = 0;
if (*s == '\0')
return (0);
k = 1 + _strlen_recursion(s + 1);
return (k);
}
