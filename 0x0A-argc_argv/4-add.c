#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: argument cunter
 * @argv: argument vector
 * Return: 0 if nothing is passed and 1 for non-numbers
 */

int main(int argc, char *argv[])
{
	int i, j;
	int n = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (d = 0; argv[c][d] != '\0'; d++)
		{
			if (argv[c][d] < '0' || argv[c][d] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		n += atoi(argv[c]);
	}
	printf("%d\n", n);
	return (0);
}
