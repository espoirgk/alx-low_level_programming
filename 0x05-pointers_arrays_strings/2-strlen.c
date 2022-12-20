#include "main.h"

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
