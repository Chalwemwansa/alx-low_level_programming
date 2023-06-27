#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints the remaining half of a string
 * Return: there is no return value
 * @str: string being used in the code
 */
void puts_half(char *str)
{
int p = strlen(str), p1, p2, p3;
if ((p % 2) == 0)
{
p1 = p / 2;
}
else
{
p1 = (p / 2) + 1;
}
p2 = p1;
p3 = p - p1;
while (p3 >= 0)
{
_putchar(str[p2]);
p2++;
p3--;
}
}
