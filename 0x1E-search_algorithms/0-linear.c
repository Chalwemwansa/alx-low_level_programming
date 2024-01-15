#include "search_algos.h"

/**
 * linear_search - function that searches an array linearly
 *
 * @array: poiter to the array to search in
 * @size: the size of the array
 * @value: the value to search for in the array
 * Return: returns the index if value is found, else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
