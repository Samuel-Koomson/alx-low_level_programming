#include "main.h"
#include <stdlib.h>

/**
* *create_array - function creates an array and initializes with specific char
* @size: unsigned integer
* @c: character
* Return: NULL if size = 0 or pointer if it fails
*/

char *create_array(unsigned int size, char c)

{
unsigned int x = 0;
char *yptr;
if (size == 0)
return (NULL);
yptr = malloc(sizeof(c) * size);
if (yptr == NULL)
return (NULL);
while (x < size)
{
yptr[x] = c;
x++;
}
return (yptr);
}
