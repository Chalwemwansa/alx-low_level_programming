#include "search_algos.h"

/**
 * helper - helps print the values and compare values in list to the value
 *
 * @array: the array to check in
 * @end: the end node
 * @value: the value to serch for
 * Return: the node or NULL
 */
skiplist_t *helper(skiplist_t *array, skiplist_t *end, int value)
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
 * linear_skip - does a linear search in a given linked list
 * with a component that points to a given node expressly
 *
 * @list: the linked list to search in
 * @value: the value to search for in the list
 * Return: a pointer to the node with the value else NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *iter = list, *prev = list;

	if (list == NULL)
		return (NULL);
	while (iter != NULL)
	{
		if (iter->n >= value && iter->index != 0)
		{
			printf("Value found between indexes [%d] and [%d]\n",
			       (int)prev->index, (int)iter->index);
			return (helper(prev, iter, value));
		}
		prev = iter;
		iter = iter->express;
		if (iter != NULL)
			printf("Value checked at index [%d] = [%d]\n", (int)iter->index, iter->n);
	}
	iter = prev;
	while (1 == 1)
	{
		if (iter->next == NULL)
			break;
		iter = iter->next;
	}
	printf("Value found between indexes [%d] and [%d]\n",
	       (int)prev->index, (int)iter->index);

	return (helper(prev, iter, value));
}
