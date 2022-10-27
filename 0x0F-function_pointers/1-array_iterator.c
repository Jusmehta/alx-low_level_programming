#include <stdlib.h>
#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter
 * @array: the array being passed
 * @size: the size of the array
 * @action: pointer to the function in use
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
