#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *new_dog - function that creates a new dog.
 * @name: pointer to to char names dog
 * @age: ages dog
 * @owner: pointer to the char owners dog
 * Return: type dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int i, j, k;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;
	p = malloc(sizeof(dog_t));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	p->name = malloc(i * sizeof(p->name));
	if (p->name == NULL)
	{
		free(p->name);
		free(p);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		p->name[k] = name[k];
	p->age = age;
	p->owner = malloc(j * sizeof(p->owner));
	if (p->owner == NULL)
	{
		free(p->owner);
		free(p->name);
		free(p);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		p->owner[k] = owner[k];
	return (p);
}
