#include "main.h"
#include <stdio.h>
/**
 * main - prints the arguments given
 * Return: 0
 * @argc: number of arguments
 * @argv:an array of arguments
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", (argc - 1));
return (0);
}
