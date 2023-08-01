#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 *
 * @head: the given linked list
 * @n: the data to be added to tthe end of the linked list
 * Return: a pointer to the first element of the linked list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *ptr1;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	(*ptr).n = (int)n;
	(*ptr).next = NULL;
	ptr1 = *head;
	if (ptr1 != NULL)
	{
	while (ptr1 != NULL)
	{
		if ((*ptr1).next == NULL)
		{
			(*ptr1).next = ptr;
			break;
		}
		ptr1 = (*ptr1).next;
	}
	return (*head);
	}
	else
		*head = ptr;
	return (*head);
}
