#include "main.h"
#include<stdio.h>
/**
 * _atoi - changes a string with numbers into an integer
 * Return: 0
 * @s: variable to be used in the string
 */
int _atoi(char *s)
{
unsigned int ni = 0;
int c = 0, min = 1, isi = 0;
while (s[c])
{
if (s[c] == 45)
min *= -1;
while (s[c] >= 48 && s[c] <= 57)
{
isi = 1;
ni = (ni * 10) + (s[c] - '0');
c++;
}
if (isi == 1)
break;
c++;
}
ni *= min;
return (ni);
}
