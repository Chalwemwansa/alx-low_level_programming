#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - returns a pointer to the first occurence of a certain character
 * Return: a pointer
 * @s: variable to be used
 * @accept: variable to be used
 */
char *_strpbrk(char *s, char *accept)
{
int i, i1;
for (i = 0; s[i] != '\0'; i++)
{
for (i1 = 0; accept[i1] != '\0'; i1++)
{
if (s[i] == accept[i1])
return (&s[i]);
}
}
return (NULL);
}
