#include "search_algos.h"

/**
 * my_binary_search - the function that does the actual binary search
 *
 * @array: the pointer to the array to be searched in
 * @min: the minimum index to start the search from
 * @max: the max index to search in
 * @value: the value to search for
 * Return: returns -1 if value is not in the array else it returns the index
 */
int my_binary_search(int *array, int min, int max, int value)
{
	int i;
	int midpoint = (min + (max - 1)) / 2;

	if (min == max)
		return (-1);

	printf("Searching in array:");
	for (i = min; i < max; i++)
	{
		if (i == min)
			printf(" %d", array[i]);
		else
			printf(", %d", array[i]);
	}
	putchar('\n');

	if (array[midpoint] == value)
		return (midpoint);
	if (array[midpoint] > value)
		max = midpoint;
	if (array[midpoint] < value)
		min = midpoint + 1;

	return (my_binary_search(array, min, max, value));
}


/**
 * binary_search - searches an array using binary search
 *
 * @array: the array to search for a value in
 * @size: the size of the array
 * @value: the value to search for in the array
 * Return: returns -1 if array is null or the value is not in the array
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (my_binary_search(array, 0, (int)size, value));
}
