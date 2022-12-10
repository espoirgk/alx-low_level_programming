#include <stdio.h>
/**
 * main - Print all numbers from base 10
 * using putchar
 *
 * Return: always 0 if success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);

}
