#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers from n to 98
 * Return:0
 * @n: an integer n
 */
void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
if (n == 98)
{
printf("%d", n);
putchar('\n');
break;
}
else
{
printf("%d, ", n);
}
n++;
}
}
else
{
while (n > 98)
{
printf("%d, ", n);
}
}
}