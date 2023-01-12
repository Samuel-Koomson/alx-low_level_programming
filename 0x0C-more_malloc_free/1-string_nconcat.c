#include "main.h"
#include <stdlib.h>

/**
* *str_nconcat - function which concatenate two strings
* @s1: first string to be concatenated
* @s2: second string to be concatenated
* @n: number of bytes
* Return: NULL on failure
*/

char *str_nconcat(char *s1, char *s2, unsigned int n)

{
	char *sam;
	unsigned int x = 0, y = 0, length = 0, length1 = 0;

	while (s1 && s1[length])
		length++;
	while (s2 && s2[length1])
		length1++;

	sam = malloc(sizeof(char) * (length + length1 + 1));
	if (sam == NULL)
		return (NULL);

	x = 0;
	y = 0;

	if (s1)
	{
		while (x < length)
		{
			sam[x] = s1[x];
			x++;
		}
	}

	if (s2)
	{
		while (x < (length + length1))
		{
			sam[x] = s2[y];
			x++;
			y++;
		}
	}
	sam[x] = '\0';

	return (sam);
}
