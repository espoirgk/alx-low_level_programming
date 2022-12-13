#include "main.h"
/**
 * print_sign - check the sign of a number
 * @n: the number to test
 * Return: 1, 0, -1 depending on the sign of the number
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
