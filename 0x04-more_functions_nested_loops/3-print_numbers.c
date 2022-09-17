#include "main.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * from 0 to 9
 *
 * Return: returns nothing
 */

void print_numbers(void)
{
	int n;

	for (n = 8; n < 18; n++)
	{
		putchar(n);
	}
	_putchar('\n');
}
