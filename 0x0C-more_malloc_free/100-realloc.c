#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a block of memory
 * Return: a void pointer
 * @ptr: initial pointer
 * @old_size: the old size of the pointer
 * @new_size: the new size of the array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *s;
int i;
if (new_size == old_size)
	return (ptr);
else if ((new_size == 0) && (ptr != NULL))
{
free(ptr);
return (NULL);
}
s = malloc(new_size);
if (s == NULL)
	return (NULL);
if (ptr == NULL)
{
return (s);
}
else if (ptr != NULL)
{
for (i = 0; (i < old_size) && (ptr[i] != '\0'); i++)
{
s[i] = ptr[i];
}
free(ptr);
}
return ((void *)s);
}
