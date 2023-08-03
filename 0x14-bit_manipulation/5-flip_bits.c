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
		nu = nu - 2;
		if (nu < 0)
			return (sum);
		sum++;
	}
}
/**
 * rem - returns the remainder of a number
 *
 * @num1: the number passed as parameter
 * Return: an integer
 */
unsigned long int rem(unsigned long int num1)
{
	return (num1 - (divi(num1) * 2));
}
/**
 * getSize - returns the size for malloc
 *
 * @num: parameter
 * Return: an integer
 */
long int getSize(long int num)
{
	long int sum = 0;

	while (num >= 0)
	{
		num = divi(num);
		sum++;
		if (num == 0)
			return (sum);
	}
	return (sum);
}
/**
 * flip_bits - returns number of bits that need to be flipped
 *
 * @n: the integer passed as parameter
 * @m: the integer passes as parameter
 * Return: nothing
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	char *str, *str1;
	long int i, p = 0, size1, size2;

	size1 = getSize(n);
	size2 = getSize(m);
	if (size1 > size2)
		size2 = size1;
	else
		size1 = size2;
	str = malloc(sizeof(char) * size1);
	if (str == NULL)
		return (0);
	str1 = malloc(sizeof(char) * size2);
	if (str1 == NULL)
		return (0);
	for (i = 0; i < size1; i++)
	{
		str[i] = rem(n);
		n = divi(n);
		str1[i] = rem(m);
		m = divi(m);
		if ((int)str[i] != (int)str1[i])
			p++;
	}
	free(str);
	free(str1);
	return ((unsigned int)p);
}
