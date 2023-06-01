#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

void first(void) __attribute__ ((constructor));

/**
 * first - a function to print a sentence before the main function execution.
 *
 */

void first(void)
{

printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");

}
