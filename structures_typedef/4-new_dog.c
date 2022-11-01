#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
  * new_dog - new dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: the name of the owner
  *
  * Return: the new struct of the dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dawg;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		dawg = malloc(sizeof(dog_t));

		if (dawg == NULL)
			return (NULL);

		dawg->name = malloc(sizeof(char) * name_l);

		if (dawg->name == NULL)
		{
			free(dawg);
			return (NULL);
		}

		dawg->owner = malloc(sizeof(char) * own_l);

		if (dawg->owner == NULL)
		{
			free(dawg->name);
			free(dawg);
			return (NULL);
		}

		dawg->name = _strcpy(dawg->name, name);
		dawg->owner = _strcpy(dawg->owner, owner);
		dawg->age = age;
	}

	return (dawg);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int x = 0;

	for (; *s != '\0'; s++)
	{
		x++;
	}

	return (x);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	dest[x++] = '\0';

	return (dest);
}
