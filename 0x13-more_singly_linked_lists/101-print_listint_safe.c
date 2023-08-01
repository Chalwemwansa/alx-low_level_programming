#include "lists.h"
/**
 * print_listint_safe - prints a linked lists content
 *
 * @head: the linked list passed as parameter
 * Return: an integer
 */
size_t print_listint_safe(const listint_t *head)
{
	int i = 0, p;
	
	printf("[%p] %d\n", (void *)&head, (*head).n);
	head = (*head).next;
	p = (*head).n;
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)&head, (*head).n);
		head = (*head).next;
		if ((*head).n == p)
			break;
		if ((*head).n == p)
			exit (98);
		else
		i++;
	}
	return (i);
}
