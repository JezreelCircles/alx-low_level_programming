#include "lists.h"

/**
 * free_dlistint -  a function that frees a dlistint_t list.
 * @head: node list head
 * Return: none
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
	tmp = head->next;
	free(head);
	head = tmp;
	}
}
