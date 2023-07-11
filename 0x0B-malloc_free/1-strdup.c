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
char *s;
if (str == NULL)
	return (NULL);
while (str[i])
	i++;
s = malloc(sizeof(char) * (i + 1));
if (s == NULL)
	return (NULL);
while (i1 < i)
{
s[i1] = str[i1];
i1++;
}
return (s);
}
