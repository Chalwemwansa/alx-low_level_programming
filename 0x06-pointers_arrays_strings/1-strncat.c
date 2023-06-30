#include "main.h"
#include <stdio.h>
/**
 * _strncat - concatenates two strings
 * Return: a character string
 * @dest: the destination string after copying
 * @src: the cource string during concatenation
 *@n: the number of bytes to be copied from the source string
 */
char *_strncat(char *dest, char *src, int n)
{
int s = 0, d = 0;
while (dest[d] != '\0')
d++;
while ((s < n) && (src[s] != '\0'))
{
dest[d] = src[s];
s++;
}
dest[d] = '\0';
return (dest);
}
