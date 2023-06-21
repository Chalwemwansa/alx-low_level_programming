#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * Return: 0
 * @p: an integer p
 */
int print_last_digit(int p)
{
int l = p % 10;
if (l < 0)
{
_putchar(-l + 48);
return (-l);
}
else
{
_putchar(l + 48);
return (l);
}
}
