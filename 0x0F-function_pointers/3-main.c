#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 *
 * Return: 0
 * @argc: gives the total number of arguments
 * @argv: the different arguments provided
 */
int main(int argc, char *argv[])
{

	int i, a, b;

	if (*argv[2] == 92 || *argv[2] == 46 || *(argv[2] + 2) == '/')
	{
		printf("Error\n");
		exit(99);
	}
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	i = get_op_func(argv[2])(a, b);
	if (i == 0)
	{
		printf("Error\n");
		exit(99);
	}
	else
		printf("%d\n", i);
	return (0);

}
