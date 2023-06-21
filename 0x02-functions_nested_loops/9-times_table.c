#include "main.h"
/**
 *times_table - prints the time table
 *Return: 0
 */
void times_table(void)
{
int a, b, c, d, e, f;
for (b = 48; b <= 57; b++)
{
for (a = 0; a <= 9; a++)
{
c = ((b - 48) * a);
if (c <= 9)
{
_putchar(' ');
_putchar(48 + c);
if (a != 9)
{
_putchar(',');
_putchar(' ');
}
}
else
{
e = c % 10;
f = (c - e) / 10;
_putchar(48 + f);
_putchar(48 + e);
if (a != 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
return (0);
}
