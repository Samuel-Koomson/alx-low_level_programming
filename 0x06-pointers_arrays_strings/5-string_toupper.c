#include"main.h"
#include<ctype.h>

/**
 * string_toupper - changes lowercase to uppercase
 * @char: character
 * Return: transformed character
 */

char *string_toupper(char *)
{
	int index = 0;
	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}

	return (str);
}
