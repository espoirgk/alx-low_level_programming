#include "main.h"
/*
 *_puts_recursion - a function that prints a string follow by new line
 *@s: argument to be printed
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
