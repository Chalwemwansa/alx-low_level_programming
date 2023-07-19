#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - adds two numbers brought to the command line
 * Return: an integer
 * @a: variable to be used in the code
 * @b: variable to be usued in the code
 */
int op_add(int a, int b)
{

	return ((a) + (b));

}
/**
 * op_sub - subtracts two numbers
 * Return: an integer
 * @a: variable used
 * @b: variable used
 */
int op_sub(int a, int b)
{

	return ((a) - (b));

}
/**
 * op_mul - multiples two numbers
 * Return: an integer
 * @a: variable used in the code
 * @b: variable used in the code
 */
int op_mul(int a, int b)
{

	return ((a) * (b));

}
/**
 * op_div - divides two numbers
 * Return: an integer
 * @a: variable to be used
 * @b: variable to be used
 */
int op_div(int a, int b)
{

	if (b == 0)
	{
		printf("Error\n");
		exit(99);
	}
	return ((a) / (b));

}
/**
 * op_mod - computes the modulus of two numbers
 * Return: an integer
 * @a: variable to be used in thhe code
 * @b: variable to be used in the code
 */
int op_mod(int a, int b)
{

	if (b == 0)
	{
		printf("Error\n");
		exit(99);
	}
	return ((a) % (b));

}
