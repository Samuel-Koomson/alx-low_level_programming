#include "main.h"
#include <stdlib.h>

/**
* *array_range - function create an array of integers
* Array should all values from min to maxi
* The order should be from min to maxi
* @min: minimum integer being created
* @max: max integer being created
* Return: pointer to the newly created array
*/

int *array_range(int min, int max)
{
int *new_ptr;
int x, y;
if (min > max)
return (NULL);
y = max - min + 1;
new_ptr = malloc(sizeof(int) * y);
if (new_ptr == NULL)
return (NULL);
for (x = 0; min <= max; x++)
new_ptr[x] = min++;
return (new_ptr);
}

