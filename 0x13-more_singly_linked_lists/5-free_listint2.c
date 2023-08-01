#include "lists.h"
/**
 * free_listint2 - frees a list given as argument
 *
 * @head: poiter to the addrress of the linked list
 * Return: does not return anything
 */
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	while (*head != NULL)
	{
		ptr = (**head).next;
		free(*head);
		(*head) = ptr;
	}
	*head = NULL;
}
