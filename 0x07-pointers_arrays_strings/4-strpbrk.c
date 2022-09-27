#include <stdlib.h>
#include "main.h"

/**
 * _strpbk - function searches for a set of bytes in a string
 * @s: the string to be checked
 * @accept: the bytes to search
 * Return: a pointer to the byte in @s matching any of @accept
 * bytes. Return NULL if none is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
