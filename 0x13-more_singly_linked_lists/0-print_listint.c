#include "lists.h"
/**
 * print_listint - prints the contents of a linked list to standard output
 *
 * @h: variable used in th code
 * Return: a pointer to the first element of the linked list
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		i++;
		h = (*h).next;
	}
	return (i);
}
