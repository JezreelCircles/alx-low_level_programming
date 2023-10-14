#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - a function that adds a new node at the beginning of a
 * dlistint_t list.
 * @head: node list head
 * @n: element value
 * Return: new elemnt addresse
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NEW;
	dlistint_t *h;

	NEW = malloc(sizeof(dlistint_t));
	if (NEW == NULL)
		return (NULL);
	NEW->n = n;
	NEW->prev = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	NEW->next = h;
	if (h != NULL)
		h->prev = NEW;

	*head = NEW;
	return (NEW);
}
