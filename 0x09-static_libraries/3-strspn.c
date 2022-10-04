#include "main.h"

/**
 * _strspn - function to get the length of prefix substring
 * @s: where to get bytes
 * @accept: the bytes to be included
 * Return: the bytesin the prefix segment of @s
 * consisting of bytes from @accept only
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
