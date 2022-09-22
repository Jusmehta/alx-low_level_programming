#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings and add a null
 * byte at the end of the string
 * @src: the source string
 * @dest: the pointer to the string to append to
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int v;
	int i;
	int j;

	i = strlen(dest);
	j = strlen(src);

	for (v = 0; v <= j; v++)
	{
		dest[i + v] = src[i];
	}
	return (dest);
}
