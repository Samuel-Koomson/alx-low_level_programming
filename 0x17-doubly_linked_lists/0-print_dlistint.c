#include "lists.h"
/**
* print_dlistint - Function that prints all elements of dlistint_t list
* @h: Head pointer to the node
* Return: Number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}

