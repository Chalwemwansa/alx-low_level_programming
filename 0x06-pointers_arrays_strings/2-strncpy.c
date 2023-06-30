#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copies the contents of a string to another string
 * Return: the copied string
 * @dest: the string being copied to
 * @src: the string being copied from
 * @n: the length of the two strings
 */
char *_strncpy(char *dest, char *src, int n)
{
int d = 0;
while ((d < n) && (src[d] != '\0'))
{
dest[d] = src[d];
}
while (d < n)
{
dest[d] = '\0';
d++;
}
return (dest);
}
