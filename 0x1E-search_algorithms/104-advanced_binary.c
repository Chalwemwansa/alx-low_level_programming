#include "search_algos.h"

/**
 * my_advanced_binary_search - the main array to use for recursion
 *
 * @array: the array to search for a value in
 * @low: the lower index for the search interval
 * @high: the higher index for the search interval
 * @value: the value to search for in the array
 * Return: the index of the value if found else -1
 */
int my_advanced_binary_search(int *array, int low, int high, int value)
{
	int i = low, middle = (high + low) / 2;

	printf("Searching in array: ");
	for (; i <= high; i++)
	{
		printf("%d", array[i]);
		if (i != high)
			printf(", ");
		else
			putchar('\n');
	}
	if (array[middle] == value && (middle == 0 || array[middle - 1] != value))
		return (middle);
	if (low == high)
		return (-1);
	if (array[middle] < value)
		low = middle + 1;
	if (array[middle] >= value)
		high = middle;

	return (my_advanced_binary_search(array, low, high, value));
}

/**
 * advanced_binary - finds the first occurence of the value being searched for
 *
 * @array: the array to search for the value in
 * @size: the total length of the array to search in
 * @value: the value to search for in the array
 * Return: the index of the value in the array if present else -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (my_advanced_binary_search(array, 0, size - 1, value));
}
