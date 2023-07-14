#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * Return: an integer
 * @s: the string
 */
int _atoi(char *s)
{
int i = 0, d = 0, n = 0, len = 0, f = 0, digit = 0;
while (s[len] != '\0')
len++;
if (s[0] == '-')
	++d;
while (i < len && f == 0)
{
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d == 1)
n = (n * 10) - digit;
else
n = (n * 10) + digit;
f = 1;
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
f = 0;
}
i++;
}
if (f == 0)
return (0);
return (n);
}
/**
 * main - prints the multiplication of two arguments
 * Return: 0 or 1
 * @argc: number of arguments
 * @argv: the array of arguments
 */
void main(int argc, char *argv[])
{
int result, n, n1;
if (argc == 3)
{
n = _atoi(argv[1]);
n1 = _atoi(argv[2]);
result = n *n1;
printf("%d\n", result);
}
else
{
	printf("Error\n");
	exit (98);
}
}
