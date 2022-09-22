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
	int i = 0;
	int l = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[l] != '\0')
	{
		dest[i] = src[l];
		i++;
		l++;
	}
	dest[i] = '\0';
	return (dest);
}
