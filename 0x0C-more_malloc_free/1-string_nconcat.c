#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - concatenates two strings
 * Return: a pointer variable
 * @s1: variable used in the code
 * @s2: variable used in the code
 * @n: variable used in the code
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int m = 0, i = 0, p, i1 = 0, it1, it2;
if (s1 == NULL)
	i = 0;
else if (s1 != NULL)
while (s1[i] != '\0')
	i++;
if (s2 == NULL)
	i1 = 0;
else if (s2 != NULL)
while (s2[i1] != '\0')
	i1++;
if (n >= i1)
n = i1;
p = i + n;
char *s;
s = malloc(sizeof(char) * (p + 1));
if (s == NULL)
return (NULL);
for (it1 = 0; it1 < i; it1++)
{
s[m] = s1[it1];
m++;
}
for (it2 = 0; it2 < n; it2++)
{
s[m] = s[it2];
m++;
}
return (s);
}
