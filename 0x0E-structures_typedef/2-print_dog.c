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
	printf("Name: (nil)\n");
else
	printf("Name: %s\n", (*d).name);
if ((*d).age <= 0)
	printf("Age: (nil)\n");
else
	printf("Age: %f\n", (*d).age);
if ((*d).owner == NULL)
	printf("Owner: (nil)\n");
else if ((*d).owner != NULL)
	printf("Owner: %s\n", (*d).owner);
}
}
