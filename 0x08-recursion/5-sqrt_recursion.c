#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion - finds the squareroot of a number
 * Return: an integer
 * @n:variable used in the code
 */
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
else
	return (new_sqrt_recursion(n, 0));
}
/**
 * new_sqrt_recursion - new function to be used
 * Return: returns an integer
 * @p: variable used in the code
 * @m: variable to be used in the code
 */
int new_sqrt_recursion(int p, int m)
{
if (m * m > p)
	return (-1);
else if (m * m == p)
	return (m);
else
	return (new_sqrt_recursion(p, m++));
}
