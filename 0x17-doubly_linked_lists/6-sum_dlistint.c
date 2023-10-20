#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n) of a
 * dlistint_t linked list.
 * @head: head of the list
 * Return: sum of all the data if the list is empty, 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int SOD = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			SOD += head->n;
			head = head->next;
		}
	}
	return (SOD);
}
