#include "main.h"
/**
 * puts2 - prints only the numbers that are even
 * Return: 0
 * @str: string being used in the code
 */
void puts2(char *str)
{

int k, leng = strlen(str);
if (leng % 2 == 0)
k = leng / 2;
else
k = (leng / 2) + 1;
int k1 = 0;
while (k >= 0)
{
_putchar(str[k1]);
k1 += 2;
k--;
}
}
