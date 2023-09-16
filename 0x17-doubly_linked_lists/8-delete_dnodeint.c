#include "lists.h"

/**
 * delete_dnodeint_at_index - delets a node at a specific index
 *
 * @head: the head of the linked list
 * @index: the index at which to delete a node
 * Return: 1 on success -1 else
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr = *head, *hold, *hold1;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		hold = (**head).next;
		free(*head);
		*head = hold;
		return (1);
	}
	while (*head != NULL)
	{
		if ((**head).next != NULL && i == index - 1)
		{
			hold = *head;
			*head = (**head).next;
			hold1 = (**head).next;
			free(*head);
			*head = hold;
			(**head).next = hold1;
			if (hold1 != NULL)
			{
				*head = hold1;
				(**head).prev = hold;
			}
			*head = ptr;
			return (1);
		}
		*head = (**head).next;
		i++;
	}
	*head = ptr;
	return (-1);
}
