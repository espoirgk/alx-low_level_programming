#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Function that prints the alphabet in lower case
 */

void print_alphabet(void)
{
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar('a' + i);
	}

	_putchar('\n');
}
