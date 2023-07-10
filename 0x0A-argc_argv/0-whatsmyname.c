#include "main.h"
#include <stdio.h>
/**
 * myname - prinyts the name of the programme
 * Return: 0
 *@argc: number of arguments given
 *@argv: an array of arguments
 */
int myname(int argc, char *argv[])
{
int i;
(void)argc;
for (i = 0; *argv[i] != '\0'; i++)
_putchar(*argv[i]);
_putchar('\n');
return (0);
}
