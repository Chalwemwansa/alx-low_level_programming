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
while (i < n)
{
if (s[i] == c)
return (s + i);
else
i++;
}
return (NULL);
}
