#include "lists.h"
/**
 * add_node_end - adds a node to the end of a linked list
 *
 * @head: variable used in the code
 * @str: variable used in the code
 * Return: a pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;
	unsigned int l;

	l = 0;
	while (str[l] != '\0')
		l++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	(*new).len = l;
	(*new).str = strdup(str);
	(*new).next = NULL;
	if (*head != NULL)
	{
		last = *head;
		while ((*last).next)
			last = (*last).next;
		(*last).next = new;
		return (new);
	}
	else
		*head = new;
	return (new);
}
