#include "main.h"
#include <stdlib.h>

/**
* _calloc - function that allocates memory for an array
* @nmemb: number of elements in the array
* @size: size of the array in bytes
* Return: pointers to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)

char *ptr;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == NULL)
return (NULL);
return (ptr);
}

