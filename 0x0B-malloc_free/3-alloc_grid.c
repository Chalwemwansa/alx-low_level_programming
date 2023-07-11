#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - makes a two dimensional array
 * Return: a two dimensional array of integers
 * @width: variable used in the code
 * @height: variable used in the code
 */
int **alloc_grid(int width, int height)
{
if (width <= 0 || height <= 0)
	return (NULL);
int i, i1;
int *s[];
s = malloc(sizeof(int) * (width + height));
if (s == NULL)
	return (NULL);
for (i = 0; i < height; i++)
{
for (i1 = 0; i1 < width; i1++)
{
s[i][i1] = 0;
}
}
return (s);
}
