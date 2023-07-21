#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints any type of argument passed to it
 *
 * Return: nothing
 * @format: a list of arguments passed to the string as argumets
 * @...: symbolises different arguments passed
 */
void print_all(const char * const format, ...)
{	va_list arg;
	char *ptr;
	int n = 0, i = 0, k, k1 = 0;

	while (format != NULL && format[n] != '\0')
		n++;
	va_start(arg, format);
	while (format != NULL && i < n)
	{	k = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", (char)va_arg(arg, int));
				k++;
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				k++;
				break;
			case 'f':
				printf("%f", (float)va_arg(arg, double));
				k++;
				break;
			case 's':
				ptr = va_arg(arg, char *);
				if (ptr == NULL || *ptr == '\0')
					{
						printf("(nil)");
						k++;
						break;
					}
				printf("%s", ptr);
				k++;
				break;
			default:
				break;
		}
		if ((i != n - 1) && (k == 1))
		printf(", ");
		i++;
	}	printf("\n");
		va_end(arg);	}
