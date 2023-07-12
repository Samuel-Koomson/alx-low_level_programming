#include "search_algos.h"

/**
 * binary_search - Uses binary to search for values in an array of int
 * if value appears twice, return of lowest index is not guaranteed
 * @array: first array element pointer
 * @size: array size
 * @value: value being searched
 * Return: value index, -1 if value is not found or
 * array is NULL
 */

int binary_search(int *array, size_t size, int value)
{
	int low, mid, high;
	int x;

	if (array == NULL)
	{
		return (-1);
	}

	low = 0;
	high = size - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;

		printf("Searching in array: ");
		for (x = low; x <= high; x++)
			printf("%i%s", array[x], x == high ? "\n" : ", ");

		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
