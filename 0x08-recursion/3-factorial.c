#include "main.h"
#include <stdio.h>
/**
 * factorial - prints the factorial of a number
 * Return: an integer
 * @n:variable to be used in the code
 */
int factorial(int n)
{
int x;
if (n > 0)
{
x = n * factorial(n--);
}
return (x);
}
