#include "main.h"
#include <stdio.h>
/**
 * _memcpy - copies n bytes from one memory area to another
 * Return: a new pointer
 * @dest: destination pointer
 * @src: the source pointer
 * @n: number of bytes to be copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
while (n > 0)
{
*(dest + n - 1) = *(src + n - 1);
n--;
}
return (dest);
}
