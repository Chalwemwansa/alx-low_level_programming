#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning of the list
 *
 * @head: the addrress of the first node
 * @n: the data to be entered
 * Return: the addrress of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	(*ptr).n = (int)n;
	(*ptr).next = *head;
	if (head != NULL)
	*head = ptr;
	else
		return (ptr);
	return (*head);
}
