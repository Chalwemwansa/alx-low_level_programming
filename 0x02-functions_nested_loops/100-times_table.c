#include "main.h"
/**
 * print_times_table - prints the n times table
 * Return: 0
 * @n: n is an integer
 */
void print_times_table(int n)
{
int nu, m, p;
if (n <= 15 && n >= 0)
{
for (nu = 0; nu <= n; nu++)
{
_putchar('0');
for (m = 1; m <= n; m++)
{
_putchar(',');
_putchar(' ');
p = nu * m;
if (p <= 99)
_putchar(' ');
if (p <= 9)
_putchar(' ');
if (p >= 100)
{
_putchar((p / 100) + '0');
_putchar((p / 10) % 10 + '0');
}
else if (p <= 99 && p >= 10)
{
_putchar((p / 10) + '0');
}
_putchar((p % 10) + '0');
}
_putchar('\n');
}
}
}
