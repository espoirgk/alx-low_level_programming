#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned
 * @b: a string of 0 and 1 chars
 *
 * Return: the convertd number or 0 if b is NULL or different from 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	int add, i, sum;

	sum = 0;

	if (b != NULL)
	{
		add = 0;
		while (b[add] != '\0')
		{
			if (b[add] != 48 && b[add] != 49)
			{
				return (0);
			}
			add++;
		}

		for (i = 0, add-- ; add >= 0 ; add--)
		{
			sum = sum + ((b[add] - '0') << i);
			i++;
		}
	}
	else
	{
		return (0);
	}
	return (sum);
}
