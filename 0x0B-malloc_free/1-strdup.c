#include "main.h"
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * Return: pointer to the new string if succesful
 * @str: variable to be used in the code
 */
char *_strdup(char *str)
{
int i = 0, i1 = 0;
if (*str == NULL)
	return (NULL);
char *s;
while (str[i] != '\0')
	i++;
s = malloc(sizeof(char) * i);
if (s == NULL)
	return (NULL);
while (i1 < i)
{
s[i1] = str[i1];
i1++;
}
return (s);
}
