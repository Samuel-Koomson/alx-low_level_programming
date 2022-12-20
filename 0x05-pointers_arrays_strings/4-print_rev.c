#include "main.h"

/**
 * print_rev - prints strings in reverse
 * @*s: string to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int m = 0;
	int i;
	
	while(*s != '\0')
{
	m++;
	s++;
}
	s--;
	for (i = m; i > 0; i--)
{
	_putchar(*s);
	s--;
}
