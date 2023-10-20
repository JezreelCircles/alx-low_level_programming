#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index -  function that returns the nth node of a dlistint_t
 * linked list.
 * @head: node head
 * @index: last node
 * Return: node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);
	tmp = head;
	while (tmp)
	{
		if (index == size)
			return (tmp);
		size++;
		tmp = tmp->next;
	}
	return (NULL);
}
