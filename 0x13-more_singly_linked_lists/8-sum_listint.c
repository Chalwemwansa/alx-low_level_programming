#include "lists.h"
/**
 * sum_listint - returns the data sum of all the data in a linked list
 *
 * @head: the first element of the linked list
 * Return: the sum of the elements
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += (*head).n;
		head = (*head).next;
	}
	return (sum);
}
