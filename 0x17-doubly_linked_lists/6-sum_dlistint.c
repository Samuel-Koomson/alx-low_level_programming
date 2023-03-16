#include "lists.h"
/**
* sum_dlistint - Function that returns sum of all data of doubly linked list
* @head: Pointer to the head of the list
* Return: sum of data in the list or 0 if list is empty
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *current = head;

while (current != NULL)
{
sum += current->n;
current = current->next;
}

return (sum);
}
