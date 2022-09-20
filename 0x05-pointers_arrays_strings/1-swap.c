#include "main.h"
/**
 * swap_int - swaps 2 integers
 * @a: first parameter
 * @b: second parameter
 * Return: 0 on success
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
