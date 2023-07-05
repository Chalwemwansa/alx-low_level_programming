#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in a given string
 * Return: pointer to the located character
 * @s: the string
 * @c: character to be found
 */
char *_strchr(char *s, char c)
{
int i = 0;
int n = 0;
while (s[n] != '\0')
	n++;
while (i < n)
{
if (s[i] == c)
return (s + i);
else
i++;
}
return (0);
}
