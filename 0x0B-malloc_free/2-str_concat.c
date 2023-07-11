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
int i = 0, i1 = 0, i3, p, p1;
char *s;
if (s1 == NULL)
i = 0;
if (s2 == NULL)
i1 = 0;
if (s1 != NULL)
while (s1[i] != '\0')
	i++;
if (s2 != NULL)
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
for (p1 = i; p1 < i1 + i; p1++)
{
s[p1] = s2[p1 - i];
}
return (s);
}
