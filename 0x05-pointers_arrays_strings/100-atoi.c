#include "main.h"
#include<stdio.h>
/**
 * _atoi - changes a string with numbers into an integer
 * Return: 0
 * @s: variable to be used in the string
 */
int _atoi(char *s)
{
unsigned int v;
int length = 0, total = 0, i, i1, value = 1;
while (s[length] != '\0')
length++;
if (s[0] == '-')
{
for (i1 = length - 1; i1 > 0; i1--)
{
for (i = 0; i < i1; i++)
value *= 10;
v = s[length - i1] * value;
total -= v;
}
}
if (s[0] == '+')
{
for (i1 = length - 1; i1 > 0; i1--)
{
for (i = 0; i < i1; i++)
value *= 10;
v = s[length - i1] * value;
total += v;
}
}
else
{
for (i1 = length; i1 > 0; i1--)
{
for (i = 0; i < i1; i++)
value *= 10;
v = s[length - i1] * value;
total += v;
}
}
return (total);
}
