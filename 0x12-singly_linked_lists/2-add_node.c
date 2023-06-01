#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * *add_node - function that adds a new node at the beginning of a list_t list.
 * @str: to be duplicated.
 * @head: double pointer to the list_t list.
 * Return: address of the new element, NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{

list_t *new;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;


return (*head);

}
