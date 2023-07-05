#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints string in reverse
 * Return: doesn't return any value
 * @s: a variable to be used in the code
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s++);
_putchar(*s);
}
}
