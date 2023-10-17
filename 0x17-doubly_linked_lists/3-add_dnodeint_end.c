#include <stdlib.h>
#include <string.h>
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
	dlistint_t *Head;
	dlistint_t neww;

	neww = malloc(sizeof(dlistint_t));
	if (neww == NULL)
		return (NULL);

	neww->n = n;
	neww->next = NULL;

	Head = *head;

	if (Head != NULL)
	{
		while (Head->next != NULL)
			Head = Head->next;
		Head->next = neww;
	}
	else
	{
		*head = neww;
	}
	neww->prev = Head;
	return (neww);
}
