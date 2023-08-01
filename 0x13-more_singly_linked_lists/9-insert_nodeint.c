#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at a given postion
 *
 * @head: the address of the first node
 * @idx: the index at which the node is to be added
 * @n: the data in the node
 * Return: a pointer to the newly created node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *ptr1;

	if (head != NULL)
	{
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	(*ptr).n = n;
	(*ptr).next = NULL;
	if ((**head).next == NULL)
	{
		(*ptr).next = *head;
		*head = ptr;
		return (*head);
	}
	ptr1 = *head;
	while (idx != 1)
	{
		if (ptr1 == NULL)
			return (NULL);
		ptr1 = (*ptr1).next;
		idx--;
	}
	if (ptr1 != NULL && (*ptr1).next != NULL)
	{
	(*ptr).next = (*ptr1).next;
	(*ptr1).next = ptr;
	return ((*ptr1).next);
	}
	}
	return (NULL);
}
