#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates a memory space using malloc function
 * Return: a pointer to the memory
 * @b: variable used in the code
 */
void *malloc_checked(unsigned int b)
{
void *s;
s = malloc(b);
if (s == NULL)
{
exit(98);
}
return (s);
}
