#include <stdlib.h>
#include "main.h"

/**
 * create_array - creattes an array of characters and initiaizes
 * it with a specific char
 * @size: size of the array
 * @c: the character to initialize the array with
 * Return: a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
