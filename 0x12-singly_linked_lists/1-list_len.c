#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - a function that returns the number of elements
 * in a linked list_t list.
 * @h: pointer to lists_t
 * Return: number of elements in h.
 */

size_t list_len(const list_t *h)
{

size_t a = 0;

while (h)
{
a++;
h = h->next;
}

return (a);

}
