#include "main.h"
#include <stdio.h>
/**
 * _memset - copies a specific type of byte on several locations
 * Return: a pointer
 * @s: variable to be used
 * @b: a variable to be used
 * @n: a variable to be used
 */
char *_memset(char *s, char b, unsigned int n)
{
while (n > 0)
{
*(s + n - 1) = b;
n--;
}
return (s);
}
