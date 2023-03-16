#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end -Function adds a new node at the end of a doubly linked list.
 * @head: a pointer to a pointer to the head node of the list.
 * @n: the integer value to store in the new node.
 * Return: a pointer to the new node, or NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node, *temp;

    if (!head)
        return (NULL);

    new_node = malloc(sizeof(dlistint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    if (*head)
    {
        temp = *head;
        while (temp->next)
            temp = temp->next;
        temp->next = new_node;
        new_node->prev = temp;
    }
    else
    {
        new_node->prev = NULL;
        *head = new_node;
    }

    return (new_node);
}

