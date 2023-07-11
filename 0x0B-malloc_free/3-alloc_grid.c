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
int i, i1, i2;
int **s;
if (width <= 0 || height <= 0)
return (NULL);
s = malloc(sizeof(int *) * height);
if (s == NULL)
	return (NULL);
for (i2 = 0; i2 < height; i2++)
{
s[i2] = malloc(sizeof(int) * width);
if (s[i2] == NULL)
{
for (; i2 >= 0; i2--)
	free(s[i2]);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (i1 = 0; i1 < width; i1++)
{
s[i][i1] = 0;
}
}
return (s);
}
