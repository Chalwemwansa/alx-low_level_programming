#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * Return: character array
 * @name: variable
 * @age: variable
 * @owner: variable
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;
p = malloc(sizeof(dog_t));
if (p == NULL)
	return (NULL);
(*p).name = name;
(*p).age = age;
(*p).owner = owner;
return (p);
}
