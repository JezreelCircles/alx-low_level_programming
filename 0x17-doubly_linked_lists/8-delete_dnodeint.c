#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at index index
 * of a dlistint_t linked list.
 * @head: head of the list
 * @index: index of the list
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h;
	dlistint_t *H;
	unsigned int a;

	h = *head;

	if (h != NULL)
		while (h->prev != NULL)
			h = h->prev;
	while (h != NULL)
	{
		if (a == index)
		{
			if (a == 0)
			{
				*head = h->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				H->next = h->next;

				if (h->next != NULL)
					h->next->prev = H;
			}
			free(h);
			return (1);
		}
		H = h;
		h = h->next;
		a++;
	}
	return (-1);
}
