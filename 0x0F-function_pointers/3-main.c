#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - calls some calculation stuff
 * Return:0
 * @argc: count for the arguments
 * @argv: an array of arguments passed
 */
int main(int argc, char *argv[])
{
int a, b, c;
if ((argc != 4) || argv[2][4])
{
	printf("Error\n");
	exit(98);
}
a = atoi(argv[1]);
b = atoi(argv[3]);
if (argv[2][0] == 39)
c = get_op_func(argv[2]++)(a, b);
else
c = get_op_func(argv[2])(a, b);
if (c == 0)
{
	printf("Error\n");
	exit(100);
}
else
{
	printf("%d\n", c);
}
return (0);
}
