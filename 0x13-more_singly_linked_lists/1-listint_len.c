#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked
 * listint_t list.
 *
 * @h: linked list to traverse.
 * Return: number of nodes.
 */

size_t listint_len(const listint_t *h)
{
size_t number = 0;

while (h)
{
number++;
h = h->next;
}

return (number);
}
