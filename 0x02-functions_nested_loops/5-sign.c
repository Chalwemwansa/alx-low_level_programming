#include "main.h"
/**
 * print_sign - checks if number is positive, zero or negative
 * Return: 0
 * @n: integer n
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
if (n < 0)
{
_putchar(48);
return (0);
}
else
_putchar(45);
return (-1);
}
