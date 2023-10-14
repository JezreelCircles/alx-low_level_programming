#include "lists.h"
#include <stdio.h>

/**
 * free_dlistint -  a function that frees a dlistint_t list.
 * @head: node list head
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
