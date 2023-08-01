#include "lists.h"
/**
 * delete_nodeint_at_index - deletes element at a given index
 *
 * @head: the given linked list
 * @index: the index of the value to be deleted
 * Return: 1 if succesfull and -1 if not
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr = NULL, *ptr1 = NULL;

	if (head != NULL && *head != NULL)
	{
	if (index == 0)
	{
		if ((**head).next != NULL)
		ptr = (**head).next;
		free(*head);
		*head = ptr;
		return (1);
	}
	ptr1 = *head;
	while (index != 1)
	{
		if (*head == NULL)
			return (-1);
		*head = (**head).next;
		index--;
	}
	if ((*head)->next->next == NULL)
	{
	ptr = *head;
	*head = (**head).next;
	free(*head);
	(*ptr).next = NULL;
	*head = ptr1;
	return (1);
	}
	ptr = (**head).next;
	(**head).next = (*head)->next->next;
	*head = ptr;
	free(*head);
	*head = ptr1;
	return (1);
	}
	return (-1);
}
