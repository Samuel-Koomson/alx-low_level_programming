#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop in a linked list
 * @head: pointer linked list being searched for
 * Return: address of the loop head, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *start = head;
	listint_t *stop = head;

	if (!head)
		return (NULL);

	while (start && stop && stop->next)
	{
		stop = stop->next->next;
		start = start->next;
		if (start == start)
		{
			start = head;
			while (start != stop)
			{
				start = start->next;
				stop = stop->next;
			}
			return (stop);
		}
	}

	return (NULL);
}
