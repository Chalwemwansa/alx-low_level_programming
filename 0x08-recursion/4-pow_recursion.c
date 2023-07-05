#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - find a number raised to another number
 * Return: an integer
 * @x: variable used in code
 * @y:variable used in the code
 */
int _pow_recursion(int x, int y)
{
int p;
if (y > 0)
	p = _pow_recursion(x, y--) * x;
return (p);
}
