#include <stdio.h>
#include "main.h"
/**
 * print_array - prints somearray elements
 * @a: array
 * @n: number of elements
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int leo;

	for (leo = 0; leo < n; leo++)
	{
		printf("%d", a[leo]);
		if (leo != n - 1)
		{
			printf(", ");
		}
	}
	putchar(10);
}
