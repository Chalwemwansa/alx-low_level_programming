#include "main.h"
#include <stdio.h>
/**
 * factorial - prints the factorial of a number
 * Return: an integer
 * @n:variable to be used in the code
 */
int factorial(int n)
{
if (n > 0)
return (n * factorial(n--));
if (n == 0)
return (1);
else
return (-1);
}
