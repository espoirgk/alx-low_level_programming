#include "main.h"
/**
 * puts_half - the second half of the string
 * If the number of characters is odd, the function should print
 * the last n characters of the string
 * @str: string reference pointer
 * Return: void
 */
void puts_half(char *str)
{
	int len;

	len = _strlen(str);
	if (len % 2 == 0)
	{
		len = len / 2;
	}
	else
	{
		len = (len + 1) / 2;
	}
	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}
	_putchar('\n');

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
