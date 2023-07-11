#include "main.h"
#include<stdio.h>
/**
 * main - prints the arguments given
 * Return: 0
 * @argc: number of arguments
 * @argv: the arguments
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
