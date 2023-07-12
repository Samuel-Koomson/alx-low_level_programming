#include "search_algos.h"
#include <math.h>

/* compiling math.h with gcc requirements `-lm` */

size_t min(size_t a, size_t b);

/**
 * min - returns minimum of two size_t values
 * @a: 1st value
 * @b: 2nd value
 * Return: `a` if less or equal to `b` and `b` if otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * jump_search - looks up value in a sorted array of integers
 * @array: first element pointer
 * @size: Array size
 * @value: value being searched
 * Return: first index value, -1 if value not found or NULL array
 */

int jump_search(int *array, size_t size, int value)
{
	size_t low, high, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	for (high = 0; high < size && array[high] < value;
	     low = high, high += jump)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       high, array[high]);
	}


	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (; low <= min(high, size - 1); low++)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
	}

	return (-1);
}
