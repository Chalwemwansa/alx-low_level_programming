#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - executes function on each element of the array
 * Return: void, it doen't retturn anything
 * @array: the array passed as an argument
 * @size: the size of the array passed as an argument
 * @action: the array pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (array != NULL && action != NULL)
for (i = 0; i < size; i++)
	(*action)(*(array + i));
}
