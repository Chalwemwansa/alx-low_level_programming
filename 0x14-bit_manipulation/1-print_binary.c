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
 * print_binary - prints a number in binary
 *
 * @n: the integer passed as parameter
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int d, r, pri;

	d = divi(n);
	r = rem(n);
	pri = r + 48;
	if (d != 0)
	{
	print_binary(d);
	}
	_putchar(pri);
}
