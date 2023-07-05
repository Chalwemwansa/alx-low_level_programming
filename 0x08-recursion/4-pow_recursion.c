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
if (y > 0)
return (x * _pow_recursion(x, y--));
if (y == 0)
return (1);
if (y < 0)
return (-1);
}
