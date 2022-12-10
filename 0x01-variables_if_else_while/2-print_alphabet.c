#include <stdio.h>
/**
 * main - Print the alphabet in lowercase
 *
 * Return: always 0 if success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
