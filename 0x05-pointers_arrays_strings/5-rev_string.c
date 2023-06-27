#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * Return: 0
 * @s: variable used in the code
 */
void rev_string(char *s)
{
int l = 0, k, loop;
char v;
while (s[l])
l++;
l -= 2;
k = l;
loop = (l + 1) / 2;
while (loop >= 0)
{
v = s[l - k];
s[l - k] = s[k];
s[k] = v;
loop--;
k--;
}
}
