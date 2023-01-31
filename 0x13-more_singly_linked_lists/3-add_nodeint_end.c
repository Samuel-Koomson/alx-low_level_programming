#include "lists.h"

/**
 * add_nodeint_end - Function that adds element to the end of a node
 * @head: head node or beginning of the node
 * @n: pointer to the next item to be added
 * Return: address or null
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *hptr = malloc(sizeof(listint_t));
	listint_t *lptr = *head;

	if (hptr == NULL)
		return (NULL);

	hptr->n = n;
	hptr->next = NULL;

	if (*head == NULL)
	{
		*head = hptr;
		return (*head);
	}
	while (lptr->next != NULL)
		lptr = lptr->next;

	lptr->next = hptr;

	return (*head);
}
