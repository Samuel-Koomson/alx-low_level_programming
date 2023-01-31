#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a linked list
 * and returns the head node's data (n)
 * @head: current linked list
 * Return: 0 if empty or n if head node deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *hptr;
	int x;

	if (*head == NULL)
		return (0);
	hptr = *head;
	x = hptr->x;

	if (hptr != NULL)
	{
		*head = hptr->next;
		free(hptr);
		return (x);
	}
	return (0);
}
