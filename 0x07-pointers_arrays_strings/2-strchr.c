#include <stdlib.h>
#include "main.h"

/**
 * _strchr - function locates a character in a string
 * @s: the string to be checked
 * @c: the character to be located in string
 * @Return:a pointer once @c is found, NULL if @c isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
