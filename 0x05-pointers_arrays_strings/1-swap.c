#include "main.h"
/**
 * swap_int - swap two integers
 * @a: first pointer
 * @b: second pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
