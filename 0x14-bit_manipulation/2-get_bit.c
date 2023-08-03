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
 * get_bit - gets a bit at an index
 *
 * @n: the integer passed as argument
 * @index: the index of the bit
 * Return: an int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	char *str;
	unsigned long int size, i;

	size = divi(n);
	if (index > size)
		size = index;
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		str[i] = (n % 2) + 48;
		n = n / 2;
	}
	bit = str[index] - 48;
	free(str);
	return (bit);
}
