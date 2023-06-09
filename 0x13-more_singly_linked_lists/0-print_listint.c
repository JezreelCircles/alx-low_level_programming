#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>


/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: linked list
 *
 * Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
size_t number;
number = 0;


while (h)
{
printf("%d\n", h->n);
number++;
h = h->next;
}

return (number);
}
