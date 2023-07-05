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
return (new_is_palindrome(s, s + i, i / 2));
}
}
/**
 * new_is_palindrome - function for checking if string is palindrome or not
 * Return: an integer
 * @p:variable used in the code
 * @m:variable to be used in the code
 * @j:variable to be used in the code
 */
int new_is_palindrome(char *p, char *m, int j)
{
if (*p != *m)
	return (0);
else if ((*p == *m) && (j != 0))
	new_is_palindrome(p++, m--, j--);
else if ((*p == *m) && (j == 0))
	return (1);
}
