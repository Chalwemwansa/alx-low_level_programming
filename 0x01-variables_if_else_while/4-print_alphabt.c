#include <stdio.h>
/**
*main - program prints alphabet in lowercase except from letters q and e
*Return: 0
*/
int main(void)
{
int i;
for (i = 97; i <= 122; i++)
{
if ((i != 112) && (i != 101))
putchar(i);
}
putchar('\n');
return (0);
}
