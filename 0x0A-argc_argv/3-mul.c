#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: number of command line arguments
 * @argv: array of size argc
 * Return: 0 or 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}
