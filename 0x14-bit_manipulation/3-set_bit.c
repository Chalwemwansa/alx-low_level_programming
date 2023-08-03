#include "main.h"
/**
 * divi - divides the number passed as parameter
 *
 * @num: the number passed as a parameter
 * Return: an integer
 */
unsigned long int divi(unsigned long int num)
{
	unsigned long int sum = 0;
	long int nu;

	nu = (long int)num;
	for (;;)
	{
		nu = nu / 2;
		sum++;
		if (nu == 0)
			return (sum);
	}
}
/**
 * set_bit -sets a bit to a different one
 *
 * @n: pointer to the value to be altered
 * @index: the index of the bit to be chamged
 * Return: 1 if successful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int size, i, d, l;
	char *str;
	unsigned long int n1, sum = 0, prd;

	if (n == NULL)
		return (-1);
	n1 = *n;
	size = divi(n1);
	if ((int)index > size)
		size = index + 1;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		str[i] = (n1 % 2) + 48;
		n1 = n1 / 2;
	}
	if (str[index] == 49)
		str[index] = 48;
	else if (str[index] == 48)
		str[index] = 49;
	for (l = 0; str[l] != '\0'; l++)
	{
		d = l;
		prd = 1;
		while (d > 0)
		{
			prd *= 2;
			d--;
		}
		sum += ((str[l] - 48) * prd);
	}
	free(str);
	*n = sum;
	return (1);
}
