#include "search_algos.h"

/**
 * interpolation_search - searches an array for a given value using
 * an interpolation formula
 *
 * @array: the array to search for the value in
 * @size: the size of the array to search in
 * @value: the value to search in the array for
 * Return: the index of the value else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, low = 0, high = size - 1;

	if (array == NULL)
		return (-1);

	while (1 == 1)
	{
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
		if (pos > size)
		{
			printf("Value checked array[%d] is out of range\n", (int)pos);
			break;
		}

		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		if (pos <= low)
			break;
		if (array[pos] < value)
			low = pos + 1;
		if (array[pos] > value)
			high = pos - 1;
	}
	return (-1);
}
