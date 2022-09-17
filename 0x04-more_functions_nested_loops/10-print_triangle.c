#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: parameter size 
 * Return: nothing
 */

void print_triangle(int size)
{
	int hash, index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
			{
				putchar(' ');
			}

			for (index = 0; index < hash; index++)
			{
				putchar('#');
			}

			if (hash == size)
				continue;

			putchar('\n');
		}
	}
	putchar('\n');
}
