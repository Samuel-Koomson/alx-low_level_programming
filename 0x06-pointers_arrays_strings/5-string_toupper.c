#include"main.h"
#include<ctype.h>

/**
 * string_toupper - changes lowercase to uppercase
 * @src: string being changed
 * Return: changed string
 */

char *string_toupper(char *str)

{
	int tmp = 0;

	while (str[tmp])
	{
	if (str[tmp] >= 'a' && str[tmp] <= 'z')
	str[tmp] -= 32;
	tmp++;
	}

	return (str);
}
