#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
}
/**
 * free_dog - frees dogs
 * Return: void
 * @d:variable used in the code
 */
void free_dog(dog_t *d)
{
if (d != NULL)
free(d);
}
