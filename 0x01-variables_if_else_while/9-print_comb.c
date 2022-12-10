#include <stdio.h>
/**
 * main - Print all all possible combinations of single-digit numbers.
 * using putchar
 * Numbers must be separated by ,, followed by a space
 * Numbers should be printed in ascending order
 *
 * Return: always 0 if success
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
		if (i == 9)
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);

}
