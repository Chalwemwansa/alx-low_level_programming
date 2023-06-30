#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates a string to another
 * Return: 0
 * @dest: the destination of the copied string
 * @src: the source of the string to be copied
 */
char *_strcat(char *dest, char *src)
{
int s = 0, p = 0;
while (dest[p] != '\0')
	p++;
while (src[s])
{
dest[p] = src[s];
s++;
p++;
}
return (dest);
}
