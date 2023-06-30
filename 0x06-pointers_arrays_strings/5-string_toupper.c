#include "main.h"
#include <stdio.h>
/**
 * string_toupper - turns all lowercase letters to uppercase
 * Return: character string that is uppercase
 * @str: variable to be used
 */
char *string_toupper(char *str)
{
int p, p1, d = 0;
while (str[d] != '\0')
	d++;
for (p = 0; p < d; p++)
if ((str[p] >= 97) && (str[p] <= 122))
{
for (p1 = 97; p1 <= 122; p1++)
if (str[p] == p1)
{
str[p] = 65 + p1 - 97;
}
}
return (str);
}
