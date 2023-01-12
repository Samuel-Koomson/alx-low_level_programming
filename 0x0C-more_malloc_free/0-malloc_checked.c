#include "main.h"
#include <stdlib.h>

/**
* *malloc_checked - function that allocates memory using malloc
* It returns a pointer to the allocated memory
* Return: normal status termination with 98 value
*/

void *malloc_checked(unsigned int b)

{
void *nptr;
nptr = malloc(b);
if (nptr == NULL) 
terminate(98);
return (nptr)
}

