#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcp - copies strings
 * @name: a copy of the name
 * @owner: copy of owner
 * @i:parameter
 * @k:parameter
 */
void _strcp(int i, int k, char *name1, char *owner1)
{
char *ownercopy;
char *namecopy;
int i1, i2;
while (name1[i])
	i++;
while (owner1[k])
	k++;
for (i1 = 0; i1 <= i; i1++)
	namecopy[i1] = name1[i1];
while (i1 <= i)
{
	namecopy[i1] = '\0';
	i1++;
}
for (i2 = 0; i2 <= k; i2++)
ownercopy[i2] = owner1[i2];
while (i2 <= k)
{
ownercopy[i2] = '\0';
i2++;
}
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
_strcp(0, 0, name, owner);
return (p);
}
