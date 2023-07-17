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
int i = 0, k = 0;
char *namecopy, *ownercopy;
while (name[i])
{
namecopy[i] = name[i];
i++;
}
while (owner[i])
{
ownercopy[k] = owner[k];
k++;
}
p = malloc(sizeof(dog_t));
if (p == NULL)
	return (NULL);
(*p).name = name;
(*p).age = age;
(*p).owner = owner;
return (p);
}
