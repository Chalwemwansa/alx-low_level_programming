#include<stdio.h>
#include"main.h"
/**
 * main - prints the name of the programme
 * Return: 0
 *@argc: number of arguments given
 *@argv: an array of arguments
 */
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", *argv);
return (0);
}
