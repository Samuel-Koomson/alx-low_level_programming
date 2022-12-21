#include"main.h"

/**
 * cap_string - function used to capitalize words of a string.
 * @str: string being capitalized.
 * Return: cpitalized  string.
 */

char *cap_string(char *str)

{
	int temp = 0;

	while (str[temp])
	{
		while (!(str[temp] >= 'a' && str[temp] <= 'z'))
			temp++;

		if (str[temp - 1] == ' ' ||
		    str[temp - 1] == '\t' ||
		    str[temp - 1] == '\n' ||
		    str[temp - 1] == ',' ||
		    str[temp - 1] == ';' ||
		    str[temp - 1] == '.' ||
		    str[temp - 1] == '!' ||
		    str[temp - 1] == '?' ||
		    str[temp - 1] == '"' ||
		    str[temp - 1] == '(' ||
		    str[temp - 1] == ')' ||
		    str[temp - 1] == '{' ||
		    str[temp - 1] == '}' ||
		    temp == 0)
		str[temp] -= 32;

		temp++;
	}

	return (str);
}
