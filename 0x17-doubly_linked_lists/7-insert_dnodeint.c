#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 * position.
 * @idx: index
 * @n: new element
 * @h: head
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *New;

	if (idx == 0)
	return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
	tmp = tmp->next;
	if (tmp == NULL)
	return (NULL);
	}

	if (tmp->next == NULL)
	return (add_dnodeint_end(h, n));

	New = malloc(sizeof(dlistint_t));
	if (New == NULL)
	return (NULL);

	New->n = n;
	New->prev = tmp;
	New->next = tmp->next;
	tmp->next->prev = New;
	tmp->next = New;

	return (New);
}
