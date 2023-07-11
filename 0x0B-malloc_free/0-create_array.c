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
char *s;
unsigned int i = 0;
s = malloc(size * sizeof(char));
if (size == 0)
return (NULL);
else
{
while (i < size)
{
s[i] = c;
i++;
}
return (s);
}
}
