#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize struct
 * @d: pointer to dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
d->name = name;
d->age = age;
d->owner = owner;
}
