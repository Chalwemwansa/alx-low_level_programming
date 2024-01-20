#include "search_algos.h"
#include <math.h>

/**
 * helper - helps print the values and compare values in list to the value
 *
 * @array: the array to check in
 * @end: the end node
 * @value: the value to serch for
 * Return: the node or NULL
 */
listint_t *helper(listint_t *array, listint_t *end, int value)
{
	while (array != NULL && array->index <= end->index)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)array->index, array->n);
		if (array->n == value)
			return (array);
		array = array->next;
	}
	return (NULL);
}

/**
 * jump_list - uses the jump search algorithm to search through
 * a singly linked list for a given value
 *
 * @list: the singly linked list to search through
 * @size: the length of the list to search through
 * @value: the value to search for in the array
 * Return: a pointer to the postition of the value found else -1 on failure
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *iter = list, *prev = list;
	int step = (int)sqrt(size), i;

	if (list == NULL)
		return (NULL);

	while (1 == 1)
	{
		if (iter->n >= value && iter->index != 0)
		{
			printf("Value found between indexes [%d] and [%d]\n",
			       (int)prev->index, (int)iter->index);
			return (helper(prev, iter, value));
		}
		prev = iter;
		for (i = 0; i < step; i++)
		{
			if (iter->next == NULL)
			{
				printf("Value checked at index [%d] = [%d]\n", (int)iter->index, iter->n);
				printf("Value found between indexes [%d] and [%d]\n",
				       (int)prev->index, (int)iter->index);
				return (helper(prev, iter, value));
			}
			iter = iter->next;
		}
		printf("Value checked at index [%d] = [%d]\n", (int)iter->index, iter->n);
	}
	return (NULL);
}
