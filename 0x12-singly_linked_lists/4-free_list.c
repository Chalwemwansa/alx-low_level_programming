#include "lists.h"
/**
 * free_list - frees allocated memory to a link
 *
 * @head: variable used in the code
 * Return: void, doesn't retiurn anything
 */
void free_list(list_t *head)
{
	list_t *new;

	for (; head; )
	{
		new = (*head).next;
		free((*head).str);
		free(head);
		head = new;
	}
}
