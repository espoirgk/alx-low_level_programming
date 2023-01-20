#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all the parameters
 * @n: first parameter
 * @...: other parameters
 * Return: sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	va_list args;

	va_start(args, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);

		sum += value;
	}

	va_end(args);

	return (sum);
}
