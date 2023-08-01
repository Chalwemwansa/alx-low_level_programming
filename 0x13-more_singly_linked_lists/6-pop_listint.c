#include "lists.h"
/**
 * pop_listint - deletes the first element of a linked list
 *
 * @head: the initial element of the list
 * Return: returns the head nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;

	if (head != NULL && *head != NULL)
	{
	ptr = (**head).next;
	free(*head);
	*head = ptr;
	return ((**head).n);
	}
	return (0);

}
