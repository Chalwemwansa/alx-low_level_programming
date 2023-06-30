#include "main.h"
#include <stdio.h>
/**
 * cap_string - capitalizes the words in a string
 * Return: a string with capitalized words
 * @str: variables used in the code
 */
char *cap_string(char *str)
{
int i = 0, p, d;
if (str[i] >= 97 && str[i] <= 122)
	str[i] = 65 + str[i] - 97;
while (str[i] != '\0')
i++;
for (p = 1; p < i; p++)
{
d = p + 1;
if ((str[p] == ' ') || (str[p] == '\t') || (str[p] == '\n') || (str[p] == ',') || (str[p] == ';') || (str[p] == '.') || (str[p] == '!') || (str[p] == '?') || (str[p] == '"') || (str[p] == '(') || (str[p] == ')') || (str[p] == '{') || (str[p] == '}'))
{
if (str[d] >= 97 && str[d] <= 122 && d < i)
str[d] = 65 + str[d] - 97;
}
}
return (str);
}
