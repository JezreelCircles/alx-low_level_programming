#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint -  a function that frees a dlistint_t list.
 * @head: node list head
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)

	while (head->prev != NULL)
		head = head->prev;

	while ((tmp = head) != NULL)
	{
		(head = head->next);
	}
	free(tmp);
}
