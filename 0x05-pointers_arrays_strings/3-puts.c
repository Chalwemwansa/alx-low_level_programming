#include "main.h"
/**
 * _puts - prints a string to standard output
 * Return: 0;
 * @str: variable used in code
 */
void _puts(char *str)
{
int n = strlen(str) - 1;
while (n >= 0)
{
_putchar(str[n]);
n--;
}
_putchar('\n');
}
