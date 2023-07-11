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
char *s = (char *)malloc(size);
if (size == 0)
	return (NULL);
s [size] = '\0';
while (size >= 0)
{
s[size - 1] = c;
size--;
}
return (s);
}
