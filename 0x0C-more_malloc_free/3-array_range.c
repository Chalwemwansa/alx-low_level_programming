#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - sets the string to integers
 * Return: an int array
 * @min: variable to be used in the code
 * @max: variable used in the code
 */
int *array_range(int min, int max)
{
int *p;
int i;
if (min > max)
	return (NULL);
p = malloc(sizeof(int) * (max - min + 1));
if (p == NULL)
	return (NULL);
for (i = 0; i < (max - min + 1); i++)
{
p[i] = min + i;
}
return (p);
}
