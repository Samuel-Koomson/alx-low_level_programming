#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Function that frees a doubly linked list.
 * @head: a pointer to the head node of the list.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head)
{
temp = head;
head = head->next;
free(temp);
}
}

