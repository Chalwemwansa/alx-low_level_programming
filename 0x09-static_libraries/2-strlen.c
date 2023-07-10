#include <stdio.h>
/**
 * _strlen - returns the length of a string
 * Return: legnth of string
 * @s: variable used in the program
 */
int _strlen(char *s)
{
int n = 0;
while (s[n])
{
n++;
}
return (n);
}
