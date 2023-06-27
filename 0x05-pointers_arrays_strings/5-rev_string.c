#include <stdio.h>
/**
 * rev_string - reverses a string
 * Return: 0
 * @s: variable used in the code
 */
void rev_string(char *s)
{
int l = -1;
while (s[l])
l++;
int k = l;
int loop = (l + 1) / 2;
while (loop >= 0)
{
char v = s[l - k];
s[l - k] = s[k];
s[k] = v;
loop--;
k--;
}
}
