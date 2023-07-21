#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * int_index - returns thew index of an element in an array
 * Return: an int varaible
 * @array: the array to be used
 * @size: the size of the array
 * @cmp: the function to be called which is pointed to
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
int p;
if (size <= 0)
	return (-1);
if (array != NULL && cmp != NULL)
{
for (i = 0; i < size; i++)
{
p = 0;
p += (*cmp)(*(array + i));
if (p != 0)
	return (i);
}
}
return (-1);
}
