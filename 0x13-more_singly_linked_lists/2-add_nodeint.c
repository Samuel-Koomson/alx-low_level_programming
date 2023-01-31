#include "lists.h"
/**
 * add_nodeint - Function that adds a node to list
 * @head: The first or starting point of the node
 * @n: integer (data)
 * Return: address of the new element or null if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *hptr = malloc(sizeof(listint_t));

	if (hptr == NULL)
		return (NULL);

	hptr->n = n;
	hptr->next = (*head);
	(*head) = hptr;
	return (*head);
}
