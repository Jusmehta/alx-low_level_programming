#include "main.h"
#include <string.h>

/**
 * puts_half - prints half a given string
 * @str: string parameter
 * Return: 0
 */

void puts_half(char *str)
{
	int l = 0;
	char *y = str;
	int n;

	while (*y != '\0')
	{
		y++;
		l++;
	}
	if (l % 2 == 0)
	{
		n = l / 2;
	}
	else
	{
		n = (l + 1) / 2;
	}
	for (n = y; n < l; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
