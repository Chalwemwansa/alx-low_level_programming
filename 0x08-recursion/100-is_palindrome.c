#include "main.h"
#include <stdio.h>
/**
 * is_palindrome - checks if the string is a palindrome
 * Return: an integer
 * @s: variable to be used in the string
 */
int is_palindrome(char *s)
{
int i = 0;
while (s[i] != '\0')
	i++;
if (i == 0)
	return (1);
else
{
i--;
return (new_is_palindrome(s, 0, i));
}
}
/**
 * new_is_palindrome - function for checking if string is palindrome or not
 * Return: an integer
 * @p:variable used in the code
 * @m:variable to be used in the code
 * @j:variable to be used in the code
 */
int new_is_palindrome(char *p, int m, int j)
{
if (p[m] != m[j])
	return (0);
if ((p[m] == p[j]) && (j <= m))
	return (1);
return (new_is_palindrome(p, m + 1, j - 1));
}
