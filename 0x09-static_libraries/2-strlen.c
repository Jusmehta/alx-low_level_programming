#include "main.h"
/**
 * _strlen - prints the string's length
 * @s: pointer to the string
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
