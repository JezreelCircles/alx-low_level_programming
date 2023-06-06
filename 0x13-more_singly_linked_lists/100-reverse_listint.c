#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint -  a function that reverses a listint_t linked list.
 * @head: pointer to the first node in the list
 * no more than 1 loops.
 * only declare a maximum of two variables in the function.
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}

*head = prev;

return (*head);
}
