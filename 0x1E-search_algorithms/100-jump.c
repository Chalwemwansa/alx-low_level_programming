#include "search_algos.h"
#include <math.h>

/**
 * linear_srch - searches a list using linear search
 *
 * @start: the start of the search
 * @end: the end of the search list
 * @array: the array to search in
 * @value: the value to search for in the list
 * Return: the index if value is found in the list else -1
 */
int linear_srch(int *array, int start, int end, int value)
{
	for (; start >= 0 && start <= end; start += 1)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);
		if (array[start] == value)
			return (start);
	}
	return (-1);
}

/**
 * jump_search - algorithm that searches for a value  in a sorted list
 * using jump search algorithm
 *
 * @array: the pointer to the first element in the array to search in
 * @size: the total length of the array to search in
 * @value: the value to search for in the array
 * Return: the index of the element if found, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	int step = (int)sqrt(size), i = 0;

	if (array == NULL)
		return (-1);

	while (i < (int)size)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", i - step, i);
			if (i == 0)
				return (linear_srch(array, i, i, value));
			return (linear_srch(array, i - step, i, value));
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += step;
	}
	printf("Value found between indexes [%d] and [%d]\n", i - step, i);

	return (linear_srch(array, i - step, array[size - 1], value));
}
