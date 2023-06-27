#include<stdio.h>
/**
 * print_rev - prints a string in reverse
 * Return: 0
 * @s: variable used in code
 */
void print_rev(char *s)
{
int k = strlen(s) - 1;
while (k >= 0)
{
_putchar(s[k]);
k--;
}
putchar('\n');
}
