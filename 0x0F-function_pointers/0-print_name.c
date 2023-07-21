#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_name - prints the name according to the function co=alled
 * Return: void, it doesn't return any value
 * @name: the name to be sent to the function
 * @f: the function pointed to
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
(*f)(name);
}
