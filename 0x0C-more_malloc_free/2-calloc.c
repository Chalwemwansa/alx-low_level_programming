#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * set - setts a string to 0
 * Return: an array
 * @str: variable used in the code
 * @d:variable used in the code
 */
char *set(unsigned long int d, char *str)
{
unsigned long int i;
for (i = 0; i < d; i++)
str[i] = '0';
return (str);
}
/**
 * _calloc - allocates memory and initialises it to 0
 * Return: void pointer
 * @nmemb: variable used in the code
 * @size: variable usd in the code
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *s;
if (nmemb == 0 || size == 0)
	return (NULL);
s = malloc(nmemb * size);
if (s == NULL)
	return (NULL);
set(nmemb * size, s);
return ((void *)s);
}
