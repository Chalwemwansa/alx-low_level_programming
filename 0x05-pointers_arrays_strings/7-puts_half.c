#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints the remaining half of a string
 * Return: there is no return value
 * @str: string being used in the code
 */
void puts_half(char *str)
{
int j = 0, k;
while (str[j] != '\0')
j++;
if (j % 2 == 1)
{
k = (j - 1) / 2;
k++;
}
else
k = j / 2;
while (k < j)
{
_putchar(str[k]);
k++;
}
_putchar('\n');
}
