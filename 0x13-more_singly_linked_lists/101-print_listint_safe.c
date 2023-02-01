#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Function counts number of unique nodes in a linked list
 * @head: A pointer to the head of the list to be checked.
 * Return: 0 if the list is not looped or num of unig nodes in the list
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *january, *february;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	january = head->next;
	february = (head->next)->next;

	while (february)
	{
		if (january == february)
		{
			january = head;
			while (january != february)
			{
				nodes++;
				january = january->next;
				february = february->next;
			}

			january = january->next;
			while (january != february)
			{
				nodes++;
				january = january->next;
			}

			return (nodes);
		}

		january = january->next;
		february = (february->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Function that prints a linked list safely.
 * @head: A pointer to the head of the linked list.
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
