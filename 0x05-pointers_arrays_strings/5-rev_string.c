#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: reversed string
 */

void rev_string(char *s)
{
	char tmp;
	int i;
	int l = strlen(s);

	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}
}
