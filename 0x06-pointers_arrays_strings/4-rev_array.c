#include"main.h"

/**
 * reverse_array - writes functions that reverses the content of array int
 * @a: array
 * @n: number of elements in array
 * Return: reversed content of array
 */

void reverse_array(int *a, int n)
{
	int sam, ink;

	for (ink = n - 1; ink >= n / 2; ink--)
	{
		sam = a[n - 1 - ink];
		a[n - 1 - ink] = a[ink];
		a[ink] = sam;
	}
}
