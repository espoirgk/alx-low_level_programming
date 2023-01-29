#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - functions that prints name
 * @name: name
 * @f: function to pointer
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
