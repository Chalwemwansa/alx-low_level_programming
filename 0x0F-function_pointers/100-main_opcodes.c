#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints it's own opcode in hexadecimal
 * Return: always 0
 * @argc: the argument count
 * @argv: the array of arguments
 */
int main(int argc, char *argv[])
{
int p, i;
char *ptr;
if (argc != 2)
{
	printf("Error\n");
	exit(1);
}
p = atoi(argv[1]);
if (p < 0)
{
	printf("Error\n");
	exit(2);
}
ptr = (char *)main;
for (i = 0; i < (p - 1); i++)
{
	printf("%02hhx ", ptr[i]);
}
	printf("%02hhx\n", ptr[i]);
	return (0);
}
