#include "main.h"
/**
 *_strlen_recursion- counts the string
 *@s: the string
 *Return: the length of string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if  (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
