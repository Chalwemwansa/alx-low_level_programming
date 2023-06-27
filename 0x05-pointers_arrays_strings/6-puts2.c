#include "main.h"
/**
 * puts2 - prints only the numbers that are even
 * Return: 0
 * @str: string being used in the code
 */
void puts2(char *str)
{

int k, leng = 0;
while (str[leng] != '\0')
{
leng++;
}
for (k = 0; k < leng; k += 2)
_putchar(str[k]);
_putchar('\n');
}
