#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - checks if number is prime or not
 * Return: an integer
 * @n:variable to be used in the code
 */
int is_prime_number(int n)
{
if (n == 2)
	return (1);
if (n <= 1)
	return (0);
else
	return (new_is_prime_number(n, 2));
}
/**
 * new_is_prime_number - main function used to check if prime
 * Return: an integer
 * @p: avriable used in the code
 * @m: variable to be used in the code
 */
int new_is_prime_number(int p, int m)
{
if ((p % m == 0) && (p != m))
	return (0);
else if (p == m)
	return (1);
//else if ((p != m) && (p % m != 0))
return (new_is_prime_number(p, m + 1));
}
