#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two strings if they are the same
 * Return: the difference between the two after comparing
 * @s1: variable to be used in the code
 * @s2: variable to be used in the program
 */
int _strcmp(char *s1, char *s2)
{
int comp = 0;
while ((s1[comp] != '\0') && (s2[comp] != '\0'))
{
if (s1[comp] != s2[comp])
return (s1[comp] - s2[comp]);
comp++;
}
return (0);
}
