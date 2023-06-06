#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - a function to count the number of unique nodes in a
 * linked list.
 * @head: a pointer to the head of the list to check.
 *
 * Return: 0 if the list is not looped otherwise, the number of unique nodes.
 */

size_t looped_listint_len(const listint_t *head)
{

const listint_t *a, *b;
size_t nodes;
nodes = 1;

if (head == NULL || head->next == NULL)
return (0);

a = head->next;
b = (head->next)->next;

while (b)
{
if (a == b)
{
a = b;
while (a != b)
{
nodes++;
a = a->next;
b = b->next;
}

a = a->next;
while (a != b)
{
nodes++;
a = a->next;
}

return (nodes);
}

a = a->next;
b = (b->next)->next;
}

return (0);
}

/**
 * print_listint_safe - safely print a linked listint_t list.
 * @head: pointer to the head of the linked list.
 *
 * Return: number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
size_t nodes, idx = 0;

nodes = looped_listint_len(head);

if (nodes == 0)
{
for (; head != NULL; nodes++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}
}

else
{
for (idx = 0; idx < nodes; idx++)
{
printf("[%p] %d\n", (void *)head, head->n);
head = head->next;
}

printf("-> [%p] %d\n", (void *)head, head->n);
}

return (nodes);
}
