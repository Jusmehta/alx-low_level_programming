#include <stdio.h>

/**
 * main - program prints single digit numbers of base to from 0
 *
 * Return: (0) Success
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
		printf("%i", digit);
	putchar('\n');

	return (0);
}
