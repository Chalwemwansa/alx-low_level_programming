#include "main.h"
/**
 * print_array - prints the first n integers
 * Return:0
 *@a: variable to be used in code
 *@n: variable to be used in the code
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != (n - 1))
printf(", ");
}
printf("\n");
}
