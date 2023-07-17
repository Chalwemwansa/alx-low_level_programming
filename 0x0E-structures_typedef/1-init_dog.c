#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialises a function of the type dev
 * Return: void
 * @d:variable used in hecode
 * @name: variable used in the code
 * @age:variable used in code
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
struct dog *dog;
dog = malloc(sizeof(struct dog));
if (dog != NULL)
{
(*dog).name = name;
(*dog).age = age;
(*dog).owner = owner;
}
}
