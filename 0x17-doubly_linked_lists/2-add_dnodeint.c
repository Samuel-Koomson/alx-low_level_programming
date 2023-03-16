#include <stdlib.h>
#include "lists.h"
/**
* add_dnodeint - Function adds a new node at the beginning of the list
* @head: pointer to pointer to the head of the list
* @n: The value to store in the new node
* Return: Address of the new node, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new_node == NULL || head == NULL)
return (NULL);
new_node->n = n;
new_node->next = (*head);
new_node->prev = NULL;
if ((*head) != NULL)
(*head)->prev = new_node;
(*head) = new_node
return(&(*new_node));
}
