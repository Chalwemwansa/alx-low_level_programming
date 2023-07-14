#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * copy - copies contents on sring
 * Return: pointer to the copied string
 * @new: new string
 * @old: the old string
 * @p: the number of elements to copy
 */
char *copy(char *old, char *new, int p)
{
int i;
for (i = 0; ((i < p) && (old[i] != '\0')); i++)
	new[i] = old[i];
return (new);
}
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
if (new_size == old_size)
	return (ptr);
else if ((new_size == 0) && (ptr != NULL))
{
free(ptr);
return (NULL);
}
else if (ptr == NULL)
{
s = malloc(new_size);
if (s == NULL)
return (NULL);
free(ptr);
return ((void *)s);
}
else
{
s = malloc(new_size);
if (s == NULL)
	return (NULL);
s = copy((char *)ptr, s, old_size);
free(ptr);
return ((void *)s);
}
}
