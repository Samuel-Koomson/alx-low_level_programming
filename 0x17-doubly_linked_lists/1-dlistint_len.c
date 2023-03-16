#include "lists.h"
/**
* dlistint_len - Function that returns the number of elements in the list
* @h: head pointer to the node of the list
* Return: Number of elements in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t len = 0;
while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}
