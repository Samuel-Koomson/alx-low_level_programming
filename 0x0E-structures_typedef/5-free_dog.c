#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function frees memory allocated to a struct dog
 * @d: struct dog pointer variable to be freed
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
