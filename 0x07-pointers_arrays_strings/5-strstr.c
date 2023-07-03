#include "main.h"
#include <stdio.h>
/**
 * _strstr - returns pointer to the first occurence of the substring
 * Return: a pointer
 * @haystack: variable used in the code
 * @needle: variable used in the code
 */
char *_strstr(char *haystack, char *needle)
{
int i = 0, i1 = 0, p, p1;
while (haystack[i] != '\0')
i++;
while (needle[i1] != '\0')
i1++;
for (p = 0; p < (i - i1); p++)
	for (p1 = p; p1 < (i1 + p); p1++)
	{
	if (needle[p1 - p] != haystack[p1])
		break;
	else if ((p1 == (i1 + p - 1)) && (needle[p1 - p] == haystack[p1]))
		return (haystack + p);
	}
return (NULL);
}
