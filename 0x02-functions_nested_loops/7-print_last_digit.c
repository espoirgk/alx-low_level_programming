#include "main.h"

/**
 * print_last_digit - return the last lady
 * @n: the number to check
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int last;

	if (n > 0)
	{
		last = n % 10;
	}
	else
	{
		last = -1 * (n % 10);
	}

	_putchar(last + '0');
	return (last);
}
