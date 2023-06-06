#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * *insert_nodeint_at_index - a function that inserts a new node at a given
 * position.
 * @head: pointer to the first node.
 * @idx: where the new node is added.
 * @n: data to insert in the new node.
 * Return:  the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

unsigned int c;
listint_t *new;
listint_t *temp = *head;
c = 0;

new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;

return (new);
}

for (c = 0; temp && c < idx; c++)
{
if (c == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}

return (NULL);
}
