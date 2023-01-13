#include "main.h"
#include <stdlib.h>

/**
* _memset - function that fills memory with a constant byte
* @s: memory space being filled
* @b: character being copied
* @n: number of times character will be copied
* Return: pointer to memory
*/
char *_memset(char *s, char b, unsigned int n)
{
unsigned int x;
for (x = 0; x < n; x++)
{
s[x] = b;
}
return (s);
}

/**
* _calloc - function that allocates memory for an array
* @nmemb: number of elements in the array
* @size: size of the array in bytes
* Return: pointers to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *new;
if (nmemb == 0 || size == 0)
return (NULL);
new = malloc(size * nmemb);
if (new == NULL)
return (NULL);
_memset(new, 0, nmemb * size);
return (new);
}
