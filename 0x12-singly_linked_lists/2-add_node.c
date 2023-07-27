#include "lists.h"
/**
 * add_node - adds a node to the begining of a link
 *
 * @head: the addrress of the first node
 * @str: the string to be added to the node
 * Return: a pointer to the node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length;

	length = 0;
	while (str[length] != '\0')
		length++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	(*new).str = strdup(str);
	(*new).len = length;
	if (head != NULL)
		(*new).next = *head;
	else
	{
		(*new).next = NULL;
		return (new);
	}
	while (*head != NULL)
		*head = (**head).next;
	*head = new;
	return (new);

}
