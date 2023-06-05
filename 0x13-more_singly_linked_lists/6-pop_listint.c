#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - a function that deletes the head node of a listint_t linked
 * list, and returns the head node’s data (n).
 * @head: pointer to the first element in the linked list
 * Return: the data inside the deleted elements or 0 if list is empty.
 */

int pop_listint(listint_t **head)
{
listint_t *temp;
int number;

if (!head || !*head)
return (0);

number = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (number);
}
