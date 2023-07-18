#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strc - copies one string into another
 * @dest: the destination string
 * @str: the source string
 */
char *strc(char *dest, char *str)
{
unsigned int i = 0;
unsigned int j;
while (str[i] != '\0')
	i++;
for (j = 0; j < i; j++)
	dest[j] = str[j];
dest[j] = '\0';
return (dest);
}
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
char Owner[30], Name[30];
strc(Name, name);
strc(Owner, owner);
p = malloc(sizeof(dog_t));
if (p == NULL)
	return (NULL);
(*p).name = name;
(*p).age = age;
(*p).owner = owner;
return (p);
}
