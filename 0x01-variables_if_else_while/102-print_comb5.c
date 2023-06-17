#include <stdio.h>
/**
*main - the program prints combinations of three different integers
*Return: 0
*/
int main(void)
{
int a, p, b, c, d;
for (a = 48; a < 58; a++)
{
for (b = 48; b < 57; b++)
{
for (c = a; c < 58; c++)
{
if (c != a)
{
p = 48;
}
else
{
p = b + 1;
}
for (d = p; d < 58; d++)
{
putchar(a);
putchar(b);
putchar(' ');
putchar(c);
putchar(d);
if (!((a == 57) && (b == 56) && (c == 57) && (d == 57)))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
