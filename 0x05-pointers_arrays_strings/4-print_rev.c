#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @*s: string to be printed
 * Return: 0
 */

void rev_string(char *s)
{
int len = 0, i = 0;
char aux;

while (s[len] != '\0')
len++;

while (i < len--)
{
aux = s[i];
s[i++] = s[len];
s[len] = aux;
}
}
	 
