#include "lists.h"

/**
 * list_len - Function that returns number of elements in a linked list
 * @h: (struct)
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *hptr;
	size_t c;

	c = 0;
	hptr = h;
	while (hptr != NULL)
	{
		hptr = hptr->next;
		c++;
	}

	return (c);
}
