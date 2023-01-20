#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers followed by new line
 * @separator: the character between two numbers
 * @n: number of numbers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		printf("%d", value);
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(args);

}
