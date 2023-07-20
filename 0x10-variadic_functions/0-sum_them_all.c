#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all the numbers passed to it
 *
 * Return: an int
 * @n: the number of arguments
 * @...: symbolises multiple number of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int i;
	int sum = 0;

	va_start(a, n);
	if (n != 0)
	{
	for (i = 0; i < n; i++)
	{

	sum += va_arg(a, int);

	}
	va_end(a);
	}
	return (sum);
}
