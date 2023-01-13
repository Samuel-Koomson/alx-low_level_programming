#include "main.h"
#include <stdlib.h>

/**
* *_realloc - function that reallocates memory block
* @ptr: memory previously allocated
* @old_size: size of allocated space for pointer
* @new_size: new size of the new memory block
* Return: pointer to the new memory location
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int x;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (x = 0; x < new_size; x++)
			new_ptr[x] = old_ptr[x];
	}

	if (new_size > old_size)
	{
		for (x = 0; x < old_size; x++)
			new_ptr[x] = old_ptr[x];
	}

	free(ptr);
	return (new_ptr);
}
