#include <stdio.h>
/**
*main - program prints all possible combinations of single digit numbers
*Return: 0
*/
int main(void)
{
int p;
for (p = 48; p <= 57; p++)
{
putchar(p);
if (p != 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
