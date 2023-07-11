#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array with a specified character
 * Return: an array
 * @size: variable used in the code
 * @c:variable used in the code
 */
char *create_array(unsigned int size, char c)
{
char *s =(char *)malloc(size + 1);
if (size == 0)
	return (NULL);
else
{
int i = 0;
while (i < size)
{
s[i] = c;
i++;
}
s[i] = '\0';
return (s);
}
}
