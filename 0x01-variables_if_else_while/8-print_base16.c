#include <stdio.h>

/**
 * main - printing hexadecimal
 *
 * Return: (0) Success
 */

int main(void)
{
	char item;

	for (item = '0'; item <= '9'; item++)
		putchar(item);

	for (item = 'a'; item <= 'f'; item++)
		putchar(item);

	putchar('\n');

	return (0);
}
