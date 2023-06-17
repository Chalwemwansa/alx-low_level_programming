#include <stdio.h>
/**
*main - program prints all possible combinations of single digit numbers
*Return: 0
*/
int main(void)
{
int p, m;
for (p = 48; p <= 57; p++)
for (m = 48; m <= 57; m++)
{
putchar(p);
putchar(m);
if (!((p == 57) && (m == 57)))
{
putchar(44);
putchar(32);
}
}
return (0);
}
