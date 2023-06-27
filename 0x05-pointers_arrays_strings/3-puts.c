#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string to standard output
 * Return: 0;
 * @str: variable used in code
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
