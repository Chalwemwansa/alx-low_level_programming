#include "search_algos.h"

/**
 * my_binary_search - does a binary search on a given set of data
 *
 * @array: the array to search in
 * @low: the lower index for the search interval
 * @high: the higher index for the search interval
 * @value: the value to search for
 * Return: the index of the value in array if found, else -1
 */
int my_binary_search(int *array, int low, int high, int value)
{
	int middle = (low + high) / 2, i = low;

	printf("Searching in array: ");
	for (; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
		else
			putchar('\n');
	}
	if (array[middle] == value)
		return (middle);
	if (low == high)
		return (-1);
	if (array[middle] < value)
		low = middle + 1;
	if (array[middle] > value)
		high = middle - 1;

	return (my_binary_search(array, low, high, value));
}
/**
 * exponential_search -  searches for a value in a list using the exponential
 * search algorithm
 *
 * @array: the array to search in
 * @size: the total length of the array
 * @value: the value to search for in the array
 * Return: the index of the value if found else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	int index = 1;

	if (array == NULL)
		return (-1);
	index = 1;

	while (index < (int)size)
	{
		if (array[index] > value)
		{
			printf("Value found between indexes [%d] and [%d]\n", index / 2, index);
			return (my_binary_search(array, index / 2, index, value));
		}
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index *= 2;
	}
	printf("Value found between indexes [%d] and [%d]\n", index / 2, index - 1);
	return (my_binary_search(array, index / 2, size - 1, value));
}
