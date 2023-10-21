#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node at a given
 * position.
 * @h: head of list
 * @idx: index
 * @n: new node value
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *New;
	dlistint_t *Head;
	unsigned int m;

	New = NULL;
	if (idx == 0)
		New = add_dnodeint_end(h, n);
	else
	{
		Head = *h;
		m = 1;
		if (Head != NULL)
		{
			while (Head->prev != NULL)
				Head = Head->prev;
		while (Head != NULL)
		{
			if (Head->next == NULL)
				New = add_dnodeint_end(h, n);
			else
			{
				New = malloc(sizeof(dlistint_t));
				if (New != NULL)
				{
					New->n = n;
					New->next = Head->next;
					New->prev = Head;
					Head->next->prev = New;
					Head->next = New;
				}
			}
			break;
		}
		Head = Head->next;
		m++;
	}
	}
return (New);
}
