#include "main.h"

/**
 * strcat - concatenates two strings and add a null
 * byte at the end of the string
 * @src: the source string
 * @dest: the pointer to the string to append to
 *
 * *Return: a pointer to the desination string
 */

char *strcat(char *dest, const char *src)
{
	int i, dest_leng = 0;

	while (dest[i++])
		dest_leng++;

	for (i = 0; src[i]; i++)
		dest[dest_leng++] = src[i];

	return (dest);
}
