#include "main.h"
/**
 * swap_int - swaps two integers introduced to it
 * Return: 0
 * @a: the variable to be used
 * @b: the variable to be used
 */
void swap_int(int *a, int *b)
{
int f1 = *a;
*a = *b;
*b = f1;
}
