#include "lists.h"

/**
 * pop_listint - Function that deletes the head node of a linked list
 * and returns the head node's data (n)
 * @head: pointer to the current element in the linked list
 * Return: 0 if empty or n if head node deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int sum;

	if (!head || !*head)
		return (0);

	sum = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (sum);
}

