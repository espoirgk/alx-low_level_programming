#include <stdio.h>
/**
 * main - Print all all possible combinations of three-digit numbers.
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
		int j;

		for (j = i + 1; j < 10; j++)
		{
			int k;

			for (k = j + 1; k < 10; k++)
			{
				putchar('0' + i);
				putchar('0' + j);
				putchar('0' + k);
				if ((i == 7 && j == 8) && k == 9)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}
