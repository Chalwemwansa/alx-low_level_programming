#include<stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse
 * Return: 0
 * @s: variable used in code
 */
void print_rev(char *s)
{
int k = -1;
while (s[k] != '\0')
k++;
while (k >= 0)
{
_putchar(s[k]);
k--;
}
putchar('\n');
}
