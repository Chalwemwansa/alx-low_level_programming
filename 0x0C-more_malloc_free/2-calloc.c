#include "main.h"
#include <stdlib.h>
#include <stdio.h>
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
unsigned long int p = nmemb * size, i;
s = malloc(p);
if (s == NULL)
	return (NULL);
for (i = 0; i < p; i++)
	s[i] = '0';
return (s);
}
