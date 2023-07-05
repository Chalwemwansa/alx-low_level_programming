#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - finds the legnth of a string recursively
 * Return: the length of a string
 * @s: variable to be used in the string
 */
int _strlen_recursion(char *s)
{
int p = 0;
if (*s)
{
p++;
p += _strlen_recursion(s + 1);
}
return (p);
}
