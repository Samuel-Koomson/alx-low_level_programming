#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a doubly linked list.
 * @head: a pointer to the head node of the list.
 * @index: the index of the node, starting from 0.
 * Return: a pointer to the nth node, or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *temp;

if (!head)
return (NULL);

temp = head;
for (i = 0; i < index && temp; i++)
temp = temp->next;

if (i < index || !temp)
return (NULL);

return (temp);
}

