#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * Return: doesn't return any value
 * @a: variable used in the code
 * @size: variable used in the code
 */
void print_diagsums(int *a, int size)
{
int summ = 0, sum1 = 0, i, i1;
for (i = 0; i < size; i++)
	sum += a[i][i];
for (i1 = (size - 1); i1 >= 0; i1--)
	sum1 += a[size - i1 - 1][i1];
printf("%d, %d", sum, sum1);
}
