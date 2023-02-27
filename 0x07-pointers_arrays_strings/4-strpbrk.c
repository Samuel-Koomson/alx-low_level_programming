#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* _strpbrk - Function searches a string for any set of bytes
* @s : pointer string in which char is being searched
* @accept : pointer string in which char from *s is compared
* Return : pointer to s if success or NULL if no match is found
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
