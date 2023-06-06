#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * *get_nodeint_at_index - a function that returns the nth node of a
 * listint_t linked list.
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node being looked for, or NULL if it does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

unsigned int a = 0;
listint_t *temp = head;

while (temp && a < index)
{
temp = temp->next;
a++;
}

return (temp ? temp : NULL);
}
