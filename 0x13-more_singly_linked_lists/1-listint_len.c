#include "lists.h"
/**
 * listint_len - returns the nuber of elements in a linked list
 *
 * @h: variable used in the code
 * Return: the number of node in the linked list
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		i++;
		h = (*h).next;
	}
	return (i);
}
