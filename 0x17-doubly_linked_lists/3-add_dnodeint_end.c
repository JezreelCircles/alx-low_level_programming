#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end -  a function that adds a new node at the end of a
 * dlistint_t list.
 * @head: node list head
 * @n: element
 * Return: new element address or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *HeaD;
	dlistint_t neww;

	neww = malloc(sizeof(dlistint_t));
	if (neww == NULL)
		return (NULL);

	neww->n = n;
	neww->next = NULL;

	HeaD = *head;

	if (HeaD != NULL)
	{
		while (HeaD->next != NULL)
			HeaD = HeaD->next;
		HeaD->next = neww;
	}
	else
	{
		*head = neww;
	}
	neww->prev = HeaD;
	return (neww);
}
