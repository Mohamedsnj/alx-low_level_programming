#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * *new_dog -  creates a new struct dog
 * @name: name of dog.
 * @age:  age of dog.
 * @owner: name of owner.
 * Return: pointer the new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int j = 0, k = 0;
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	d->name = malloc(sizeof(char) * (i + 1));

	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		d->name[k] = name[k];

	d->age = age;

	for (j = 0; owner[j] != '\0'; j++)
		;

	d->owner = malloc(sizeof(char) * (j + 1));

	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}

	for (k = 0; k <= j; k++)
		d->owner[k] = owner[k];


	return (d);
}
