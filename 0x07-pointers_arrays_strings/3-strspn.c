#include "main.h"
#include <stdio.h>
/**
 * _strspn - returns length of a substring
 * Return: length of substring
 * @s: variable used
 * @accept:variable used
 */
unsigned int _strspn(char *s, char *accept)
{
int i, i1, p = 0, p1, p2, p3, acl = 0;
while (accept[acl] != '\0')
acl++;
for (i = 0; s[i] != '\0'; i++)
for (i1 = 0; i1 < acl; i1++)
{
if (s[i] == accept[i1])
{
*(k + p) = s[i];
p++;
break;
}
else if (i1 == acl - 1)
{
for (p1 = 0; p1 < acl; p1++)
{
p2 = 0;
for (p3 = 0; k[p3] != '\0'; p3++)
if (k[p3] == accept[p1])
p2++;
if (p2 == 0)
break;
else if ((p1 == (acl - 1)) && p2 > 0)
return (p);
}
}
}
return (p);
}
