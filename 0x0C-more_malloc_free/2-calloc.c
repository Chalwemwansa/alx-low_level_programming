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
void *s;
unsigned long p = nmemb * size;
s = (int *)malloc(p);
if (s == NULL)
	return (NULL);
for (unsigned int i = 0; i < p; i++)
	s[i] = 0;
return (s);
}
