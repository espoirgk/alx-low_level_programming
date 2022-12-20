#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string reference pointer
 * Return: void
 */
void print_rev(char *s)
{
	int i = _strlen(s);

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');

}

/**
 * _strlen - return length of a string
 * @s: string reference pointer
 * Return: length of a string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}
