#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * flag - checks if string is NULL
 *
 * Return: 1 if true 0 else
 * @str: the string passed to the function
 */

unsigned int flag(const char *str)
{

	if (*str == '\0')
		return (1);
	else
		return (0);

}

/**
 * print_numbers - prints the numbers passed as argument
 *
 * Return: doesn't return anything
 * @separator: seperates the arguments
 * @n: the number of arguments passed
 * @...: symbolises multiple number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ar;
	unsigned int i, check;

	va_start(ar, n);
	if (separator == NULL)
		check = 1;
	else
	check = flag(separator);
	for (i = 0; i < n; i++)
	{

	printf("%d", va_arg(ar, int));
	if (i != (n - 1) && check != 1)
		printf("%s", separator);
	if (i == (n - 1))
		printf("\n");

	}
	va_end(ar);

}
