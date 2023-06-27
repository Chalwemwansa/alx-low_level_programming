#include <stdio.h>
/**
 * _puts - prints a string to standard output
 * Return: 0;
 * @str: variable used in code
 */
void _puts(char *str)
{
int n = 0;
while (str[n])
n++
int l = n;
while (l >= 0)
{
_putchar(str[n - l]);
l--;
}
_putchar('\n');
}
