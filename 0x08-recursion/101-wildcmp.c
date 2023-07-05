#include "main.h"
#include <stdio.h>
/**
 * wildcmp - compares two strings if they are identical or not
 * Return: an integer
 * @s1: variable to be used in the code
 * @s2:variable to be used in the code
 */
int wildcmp(char *s1, char *s2)
{
int p = 0, m = 0;
while (s1[p] != '\0')
	p++;
while (s2[m] != '\0')
	m++;
if (p != m)
	return (0);
else
	return (new_wildcmp(s1, s2, p - 1));
}
/**
 * new_wildcmp - function for checking
 * Return: an integer
 * @s0: variable used
 * @s:variable used
 * @x: variable used
 */
int new_wildcmp(char *s0, char *s, int x)
{
if (s0[x] != s[x])
	return (0);
if ((x == 0) && (s0[x] == s[x]))
	return (1);
return (new_wildcmp(s0, s, x - 1));
}
