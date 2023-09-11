#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - new dog struct whose variable is to be initialized
 * @d: pointer to the new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: owner of the new dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
