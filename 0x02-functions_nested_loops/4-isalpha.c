#include "main.h"

/**
 * _isalpha - checks wether the caracter is alpha or not
 * @c: is the character to test
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
