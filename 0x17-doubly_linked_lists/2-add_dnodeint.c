#include "lists.h"
/**
* add_dnodeint - Function adds a new node at the beginning of the list
* @head: pointer to pointer to the head of the list
* @n: The value to store in the new node
* Return: Address of the new node, or NULL if it failed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
if (!head)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;
if (*head != NULL)
*head = new_node;
return (new_node);
}
