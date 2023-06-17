#include <stdio.h>
/**
 *main - prints all possible combinations of two digits
 *Return: 0
 */
int main(void)
{
int n, p;
for (n = 48; n < 57; n++)
{
for (p = n + 1; p <= 57; p++)
{
putchar(n);
putchar(p);
if (!((n == 56) && (p == 57)))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
