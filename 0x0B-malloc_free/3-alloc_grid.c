#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)

{

	int **mee;

	int b;

	int c;

if (width <= 0 || height <= 0)
return (NULL);

mee = malloc(sizeof(int *) * height);

if (mee == NULL)

return (NULL);

for (b = 0; b < height; b++)

{

mee[b] = malloc(sizeof(int) * width);

if (mee[b] == NULL)

{

for (; b >= 0; b--)
free(mee[b]);

free(mee);
return (NULL);
}
}
for (b = 0; b < height; b++)

{
for (c = 0; c < width; c++)
mee[b][c] = 0;
}
return (mee);
}
