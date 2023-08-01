#include "lists.h"
/**
 * get_nodeint_at_index - returns a pointer to the nth node
 *
 * @head: the linked list
 * @index: the index at which the value needed is seated
 * Return: a poiunter to the nth term
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head != NULL)
	{
	while (index != 0)
	{
		if (head == NULL)
			return (NULL);
		head = (*head).next;
		index--;
	}
	return (head);
	}
	else
		return (NULL);
}
