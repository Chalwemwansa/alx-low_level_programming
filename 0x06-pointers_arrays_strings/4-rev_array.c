#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses an array
 * Return: a reversed array
 * @a: varaible being used in the code
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
int d = (n - 1) / 2, p, i = 0;
while (d > 0)
{
p = a[i];
a[i] = a[n - i - 2];
a[n - i - 2] = p;
i++;
d--;
}
}
