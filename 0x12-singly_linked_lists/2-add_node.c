#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - function that adds a  new node at the beggining of a list
 * @head: first pointer to pointer node
 * @str: string to be added
 * Return: address of new element or NUll if fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *hptr;
	unsigned int x = 0;

	while (str[x])
		x++;

	hptr = malloc(sizeof(list_t));

	if (!hptr)
		return (NULL);

	hptr->str = strdup(str);
	hptr->len = x;
	hptr->next = (*head);
	(*head) = hptr;
	return (*head);
}
