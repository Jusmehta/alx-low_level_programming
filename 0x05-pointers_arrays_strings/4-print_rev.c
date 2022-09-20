#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: string to print
 * Return: nothing
 */

void print_rev(char *s)
{
	int length = strlen(s);

	while (length--)
		putchar(*(s + length));
	putchar(10);
}
