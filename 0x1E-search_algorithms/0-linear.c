#include "search_algos.h"

/**
 * linear_search - Makes use of search algorithm to look up
 * value of integers in an array
 * @array: Array of input
 * @size: Array size
 * @value: value search being searched
 * Return: Always EXIT_SUCCESS
 */

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
	{
		return (-1);
	}

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%li] = [%i]\n", x, array[x]);
		if (array[x] == value)
		{
			return (x);
		}
	}
	return (-1);
}
