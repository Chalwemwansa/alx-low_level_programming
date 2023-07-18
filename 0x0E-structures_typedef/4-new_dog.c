#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strc - copies a string
 * Return: a character array
 * @str: the string to copy
 * @dest: the destination string
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
p = malloc(sizeof(dog_t));
if (p == NULL)
	return (NULL);
(*p).name = name;
(*p).age = age;
(*p).owner = owner;
strc (name, (*p).name);
strc(owner, (*p).owner);
return (p);
}
