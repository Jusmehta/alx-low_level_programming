#include "main.h"
/**
 * _strlen - prints the string's length
 * @s: pointer to the string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\i0')
	{
		i++;
		count++;
	}
	return (count);
}
