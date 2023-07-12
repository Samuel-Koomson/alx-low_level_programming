#include "search_algos.h"

int binary_search_helper(int *array, int value,
			 size_t low, size_t high);
size_t min(size_t a, size_t b);

/**
 * min - Returns minimum of two values
 * @a: first value
 * @b: second value
 * Return: `a` if lower or equal to `b` or `b` if otherwise
 */
size_t min(size_t a, size_t b)
{
	return (a <= b ? a : b);
}

/**
 * binary_search_helper - looks up value in an integer array using a
 * binary search algorithm
 * @array: first element pointer
 * @value: value being searched
 * @low: starting point
 * @high: end point
 * Return: index of value, -1 if value not found or NULL array
 */

int binary_search_helper(int *array, int value,
			 size_t low, size_t high)
{
	size_t mid, i;

	if (!array)
		return (-1);

	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
			printf("%i%s", array[i], i == high ? "\n" : ", ");
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return ((int)mid);
	}

	return (-1);
}

/**
 * exponential_search - Looks upr a value in a sorted array of integers
 * using exponential search algorithm
 * @array: first element pointer
 * @size: size of array
 * @value: value being searched
 * Return: first index value, -1 if value not found or NULL array
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t low, high, bound = 1;

	if (!array || size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
		       bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = min(bound, size - 1);

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	return (binary_search_helper(array, value, low, high));
}
