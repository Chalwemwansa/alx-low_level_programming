#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - prints the credentials of a dog
 * Return: void, ther is no return
 * @d: variable used in the code
 */
void print_dog(struct dog *d)
{
if (d != NULL)
{
if ((*d).name == NULL)
	(*d).name = "(nil)";
printf("Name: %s\n", (*d).name);
if ((*d).owner <= 0)
	printf("Age: (nil)");
else
printf("Age: %f\n", (*d).age);
if ((*d).owner == NULL)
	(*d).owner = "(nil)";
printf("Owner: %s\n", (*d).owner);
}
return;
}
