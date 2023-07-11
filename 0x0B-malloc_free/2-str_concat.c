#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * Return: a string
 * @s1: a variable to be used in the code
 * @s2:a variable to be used in the code
 */
char *str_concat(char *s1, char *s2)
{
int i = 0, i1 = 0, i3, p;
char *s;
if (s1 == NULL)
{
s1[] = "";
}
if (s2 == NULL)
s2[] = "";
while (s1[i] != '\0')
	i++;
while (s2[i1] != '\0')
	i1++;
i3 = i + i1 + 1;
s = malloc(sizeof(char) * i3);
if (s == NULL)
	return (NULL);
for (p = 0; p < i; p++)
{
s[p] = s1[p];
}
for (p = i; p < i1 + i; p++)
{
s[p] = s2[p - i];
}
return (s);
}
