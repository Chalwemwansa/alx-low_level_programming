#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies contents of one string to another
 * Return: 0
 * @dest: variable to be used in the code
 * @src: variable to be used in the code
 */
char *_strcpy(char *dest, char *src)
{
int p;
for (p = 0; src[p] != '\0'; p++)
dest[p] = src[p];
dest[p++] = '\0';
return (dest);
}
