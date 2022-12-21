#include "main.h"
/**
* leet - encodes string into 1337
* @m: pointer  parameter
* Return: *m
*/

char *leet(char *m)
{
	int x, y;

	char l[] = "ol_ea__t";

	for (x = 0; m[x] != '\0'; x++)
	{
		for (y = 0; l[y] != '\0'; y++)
		{
			if (m[x] == l[y] || m[x] == (l[y] - 32))
			{
				s[x] = y + '0';
			}
		}
	}
	return (m);
}
