#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: linked list to search in
 *
 * Return: address of the node where the loop starts, NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow = head;
listint_t *faster = head;

if (!head)
return (NULL);

while (slow && faster && faster->next)
{
faster = faster->next->next;
slow = slow->next;

if (faster == slow)
{
slow = head;
while (slow != faster)
{
slow = slow->next;
faster = faster->next;
}
return (faster);
}
}

return (NULL);
}
