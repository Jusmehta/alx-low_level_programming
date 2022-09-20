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
		if (leo != n - 1)
			printf("%d", a[leo]);
		else
			printf("%d", a[leo]);
	}
	putchar(10);
}
