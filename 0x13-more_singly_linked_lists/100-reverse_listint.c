#include "lists.h"
/**
 * reverse_listint - reverses a given string which is linked
 *
 * @head: the first node of the linked list
 * Return: a poinbter to the first element pof the linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr, *ptr1;

	if (head != NULL)
	{
	ptr1 = *head;
	*head = (**head).next;
	(*ptr1).next = NULL;
	while (*head != NULL)
	{
		ptr = (**head).next;
		(**head).next = ptr1;
		ptr1 = *head;
		if (ptr != NULL)
		{
			*head = ptr;
		}
		else if (ptr == NULL)
		{
			return (*head);
		}
	}
	}
	return (NULL);
}
