#include"main.h"
#include<string.h>

/**
 * _strncpy - copies a sting from one variable to another
 * @dest: destination variable of string
 * @src: source of variable string
 * @n: integer variable
 * Return: string variable
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
