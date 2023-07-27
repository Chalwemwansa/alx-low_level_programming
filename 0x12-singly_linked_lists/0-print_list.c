#include "lists.h"
/**
 * print_list - prints elements in a link an dreturns the numbner of nodes
 *
 * @h: variable used in the code
 * Return: an integer
 */
size_t print_list(const list_t *h)
{
	list_t *head;
	int i = 0;

	if (h != NULL)
	{
	if ((*h).str != NULL)
	{
		printf("[%d] %s\n", (*h).len, (*h).str);
		i++;
	}
	else
	{
		printf("[0] (nil)\n");
		i++;
	}
	head = (*h).next;
	while (head != NULL)
	{
		if ((*head).str != NULL)
			printf("[%d] %s\n", (*head).len, (*head).str);
		else
			printf("[0] (nil)\n");
		head = (*head).next;
		i++;
	}
	}
	else
		printf("Error, pointer to NULL\n");
	return (i);
}
