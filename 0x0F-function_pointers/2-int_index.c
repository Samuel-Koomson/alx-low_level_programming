#include "function_pointers.h"
#include <stdlib.h>
/**
* int_index - Function that searches for an integer
* @array: pointer array in which function searches
* @size: array size
* @cmp: pointer used in function comparison
* Return: index of first element or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
int x;
if (array && cmp)
{
for (x = 0; x < size; x++)
{
if (cmp(array[x]) != 0)
return (x);
}
}
return (-1);
}
