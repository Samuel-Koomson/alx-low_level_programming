#include "main.h"
#include <stdlib.h>


/**
 * *_strdup - function returns pointer to a new string which is a duplicate
 * @str: string to be duplicated
 * Return: pointer if Success and NULL if (Error)
 */
char *_strdup(char *str)
{
	char *duplicate;
unsigned int x;
unsigned int length;

	x = 0;
	length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	while ((duplicate[x] = str[x]) != '\0')
		x++;

	return (duplicate);
}
