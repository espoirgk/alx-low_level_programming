#include <stdio.h>

/**
 * main - alphabet in lowercase, and then in uppercase, followed by a new line
 *
 * Return: 0 if success
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);

}

