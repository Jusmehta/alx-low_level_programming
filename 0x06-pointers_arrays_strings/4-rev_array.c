#include "main.h"

/**
 * reverse_array - reverses integer array
 * @a: array
 * @n: number of array elements
 *
 * Return:void
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n--; i++)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
	}
}
