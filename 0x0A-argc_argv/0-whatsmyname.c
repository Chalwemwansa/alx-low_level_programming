#include <stdio.h>
#include "main.h"
/**
 * whatsmyname - prints the name of the programme
 * Return: 0
 *@argc: number of arguments given
 *@argv: an array of arguments
 */
int whatsmyname(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}
