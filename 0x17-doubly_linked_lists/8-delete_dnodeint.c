#include "lists.h"

/**
* delete_dnodeint_at_index - deletes node at index of doubly linked list
* @head: pointer to pointer at the head of the list
* @index: Index of the node that must be deleted
* Return: 1 if it success or -1 it it fails
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int i;
if (*head == NULL)
{
return (-1);
}
current = *head;
if (index == 0)
{
*head = current->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(current);
return (1);
}
for (i = 0; i < index - 1 && current != NULL; i++)
{
current = current->next;
}
if (current == NULL || current->next == NULL)
{
return (-1);
}
temp = current->next;
current->next = temp->next;
if (temp->next != NULL)
{
temp->next->prev = current;
}
free(temp);
return (1);
}
