#include <stdio.h>
/**
 * main - Print the alphabet in lowercase except e and q
 *
 * Return: always 0 if success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
