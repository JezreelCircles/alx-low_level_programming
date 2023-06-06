#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: first node in the linked list.
 *
 * Return: result of sum if not 0.
 */

int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *temp = head;

while (temp)
{
sum += temp->n;
temp = temp->next;
}

return (sum);
}
