#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - get the length of a string
 * @s: a pointer to the string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - creates a copy of a string
 * @src: source string
 * @dest: destination string
 * Return: pointer to the copy
 */

char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;

	len = _strlen(src);

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a struct of new dog
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: the name of the owner
 * Return: pointer to the new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *dog;
	int nameLen, ownerLen;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		free(dog);
		return (NULL);
	}

	nameLen = _strlen(name);
	ownerLen = _strlen(owner);

	dog->name = malloc(sizeof(char) * nameLen + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * ownerLen + 1);
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	(*dog).age = age;

	return (dog);
}
