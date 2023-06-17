#include <stdio.h>
/**
*main - prints the alphabet in uppercase and in lower case
*Return: 0
*/
int main(void)
{
int i, p;
for (i = 97; i <= 122; i++)
putchar(i);
for (p = 65; p <= 90; p++)
putchar(p);
return (0);
}
