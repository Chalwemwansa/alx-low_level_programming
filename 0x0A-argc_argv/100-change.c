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
while (i < len && f == 0)
{
if (s[0] == '-')
++d;
if (s[i] >= '0' && s[i] <= '9')
{
digit = s[i] - '0';
if (d == 1)
digit = -digit;
n = n * 10 + digit;
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
int main(int argc, char *argv[])
{
	int p;
	int sum = 0, p1;
	int cents[] = {25, 10, 5, 2, 1};
if (argc != 2)
{
	printf("Error\n");
	return (1);
}
else
{
p = _atoi(argv[1]);
if (argv[1][0] == '-')
{
printf("0\n");
return (0);
}
while (p != 0)
{
for (p1 = 0; p1 < 5; p1++)
{
if (p >= cents[p1])
{
p -= cents[p1];
sum++;
break;
}
}
}
printf("%d\n", sum);
return (0);
}
}
