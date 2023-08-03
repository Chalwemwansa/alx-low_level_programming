#include "main.h"
/**
 * getSize - getas the size of a binary number
 *
 * @num: the number passed as parameter
 * Return: an integer
 */
long int getSize(long int num)
{
	long int sum = 0;

	while (num >= 0)
	{
		num /= 2;
		sum++;
		if (num == 0)
			return (sum);
	}
	return (sum);
}
/**
 * clear_bit - sets a given bit to zero
 *
 * @n: a pointer to the value
 * @index: the index of the bit to set to zero
 * Return: 1 if succesful -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	char *str;
	long int p1, sum = 0, i, prd, n1 = (long int)*n,
	     size = getSize((long int)*n), p;

	if (n == NULL)
		return (-1);
	if ((long int)index > size)
		size = (long int)index + 1;
	str = malloc(sizeof(char) * (size));
	if (str == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		str[i] = (n1 % 2) + 48;
		n1 /= 2;
	}
	str[index] = 48;
	for (p = 0; p < size; p++)
	{
		p1 = p;
		prd = 1;
		while (p1 > 0)
		{
			prd *= 2;
			p1--;
		}
		sum += (((int)str[p] - 48) * prd);
	}
	free(str);
	*n = sum;
	return (1);
}
