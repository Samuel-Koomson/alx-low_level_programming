/**
* insert_dnodeint_at_index - Func. inserts new node at a given position
* @h: pointer to pointer to head of list
* @idx: index of new node starting from 0
* @n: new node value to be stored
* Return: Address of new node or NULL if it fails
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int i;

if (h == NULL)
return (NULL);

if (idx == 0)
{
return (add_dnodeint(h, n));
}

current = *h;
for (i = 0; i < idx - 1 && current != NULL; i++)
{
current = current->next;
}

if (current == NULL)
{
return (NULL);
}

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;

new_node->prev = current;
new_node->next = current->next;
if (current->next != NULL)
{
current->next->prev = new_node;
}
current->next = new_node;

return (new_node);
}
