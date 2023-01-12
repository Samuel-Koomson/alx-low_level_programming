#include "main.h"
#include <stdlib.h>

/**
* *malloc_checked - function that allocates memory using malloc
* It returns a pointer to the allocated memory
* @b: number of memory in bytes being allocated
* Return: normal status termination with 98 value
*/

void *malloc_checked(unsigned int b)

{
void *nptr;
nptr = malloc(b);
if (nptr == NULL)
exit(98);
return (nptr);
}

