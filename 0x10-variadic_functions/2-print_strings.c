#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * flag - checks if separator ids not null
 *
 * Return: an integer
 * @str: the string passed as an argument
*/
unsigned int flag(const char *str)
{

	if (*str == '\0')
		return (1);
	else
		return (0);

}
/**
 * flag1 - checks if string is NULL
 *
 * Return: 1 if yes
 * @str: the string provided
 */
int flag1(char *str)
{

	if (*str == '\0')
		return (1);
	else
		return (0);

}

/**
 * print_strings - prints strings to standard output
 *
 * Return: nothing
 * @separator: string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: symbolises a number of arguments to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list arg;
	unsigned int i, check;
	char *ptr;

	va_start(arg, n);
	if (separator == NULL)
		check = 1;
	else
	check = flag(separator);
	for (i = 0; i < n; i++)
	{

		ptr = va_arg(arg, char *);
		if (ptr == NULL)
			ptr = "";
		if (flag1(ptr) != 1)
			printf("%s", ptr);
		else
			printf("(nil)");
		if ((i != n - 1) && check != 1)
			printf("%s", separator);
		if (i == n - 1)
			printf("\n");


	}

}
