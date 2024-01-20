#include "search_algos.h"

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

	while (iter != NULL)
	{
		if (iter->n >= value && iter->index != 0)
		{
			printf("Value found between indexes [%d] and [%d]\n",
			       (int)prev->index, (int)iter->index);
			while (prev->index <= iter->index)
			{
				printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
				if (prev->n == value)
					return (prev);
				prev = prev->next;
			}
			return (NULL);
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
	while (prev != NULL)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
