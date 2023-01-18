#include <stdlib.h>
#include "function_pointers.h"

/**
* array_iterator - Function that execute function given as a parameter
* on each element of an array
* @array: pointer array to needed for iteration
* @size: array size
* @action: pointer to function used
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int x;
if (!array || !action)
return;
for (x = 0; x < size; x++)
action(array[x]);
}
