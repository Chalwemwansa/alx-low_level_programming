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
if (*s1 != *s2)
	return (0);
else if ((*s1 == '\0') && (*s2 == '\0'))
	return (1);
return (wildcmp(s1 + 1, s2 + 1));
}