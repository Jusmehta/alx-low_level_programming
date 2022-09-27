#include "main.h"

/**
 * _memcpy - function copies memory area
 * @dest: the destination loc for the memory area
 * @n: the number of bytes to copy
 * @src: the source loc to copy memory
 * Return: a pointer to the @dest 
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
