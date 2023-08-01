#include "lists.h"
/**
 * free_listint - frees a list of elements in a linked list
 *
 * @head: the first element in the linked list
 * Return: does not return anything
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = (*head).next;
		free(head);
		head = ptr;
	}
}
