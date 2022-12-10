#include <stdio.h>
/**
 * main - Print all numbers from base 16
 * lowercase
 * Return: always 0 if success
 */
int main(void)
{
	int i;
	int letter;

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);

}
