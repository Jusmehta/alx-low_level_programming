#include "main.h"
#include <string.h>

/**
 * *_strncat - concatenates to strings
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = strlen(dest);

	for (i = 0; i < n && src[i] != 0; i++)
	{
		dest[j + i] = src[i];
	}
	return (dest);
}
