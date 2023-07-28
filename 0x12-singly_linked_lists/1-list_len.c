#include "lists.h"
/**
 * list_len - prints elements in a link an dreturns the numbner of nodes
 *
 * @h: variable used in the code
 * Return: an integer
 */
size_t list_len(const list_t *h)
{
	list_t *head;
	int i = 0;

	if (h != NULL)
	{
		i++;
	}
	else
	{
		return (i);
	}
	head = (*h).next;
	while (head != NULL)
	{
		head = (*head).next;
		i++;
	}
	return (i);
}
