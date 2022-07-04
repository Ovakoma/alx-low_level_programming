#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: attribute pointer to struct type dog
 * @name: attribute pointer to char names dog
 * @age: age parameter
 * @owner: attribute pointer to char owners dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
