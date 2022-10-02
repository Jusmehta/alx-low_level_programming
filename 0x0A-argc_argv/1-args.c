#include <stdio.h>

/**
 * main - prints number of arguments passed to it
 * @argc: argumrnt counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	(void)argv;

	for (i = 0; i <= argc; i++)
	{}
	printf("%d\n", i - 2);

	return (0);
}
