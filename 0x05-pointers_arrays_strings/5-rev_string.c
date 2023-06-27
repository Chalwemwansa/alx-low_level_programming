#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * Return: 0
 * @s: variable used in the code
 */
void rev_string(char *s)
{
int l = 0, k;
char v;
while (s[l])
l++;
for (k = 0; k <= l - 1; k++)
{
v = s[k];
s[k] = s[l - k - 1];
s[l - k - 1] = v;
}
}
