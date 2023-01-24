#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strcpy - Write a function that copies the string pointed to by
 * src, including the terminating null byte (\0), to the
 * buffer pointed to by dest.
 * @dest: destination
 * @src: source
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

/**
 * _strlen - returns the length of a string.
 * @s: the string to check
 * Return: the length of a string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

/**
 * new_dog - stores dog's name and owner
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bobby;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bobby = malloc(sizeof(dog_t));

	if (bobby == NULL)
		return (NULL);

	bobby->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (bobby->name == NULL)
	{
		free(bobby);
		return (NULL);
	}

	bobby->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (bobby->owner == NULL)
	{
		free(bobby->name);
		free(bobby);
		return (NULL);
	}

	bobby->name = _strcpy(bobby->name, name);
	bobby->age = age;
	bobby->owner = _strcpy(bobby->owner, owner);

	return (bobby);

}
