#include"main.h"
#include<string.h>

/**
 * _strncat - concatenates two strings 
 * @*dest: destination of string
 * @*src: source string
 * @n: integer value
 * Return: pointer to string destination
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
