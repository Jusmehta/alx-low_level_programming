#include "main.h"

/**
 * binary_to_uint - converts binary to int
 * @b: string of binary numbers
 * Return: returns the converted number or 0 if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	int power = 0;
	unsigned int n = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i + 1])
		i++;
	while (i >= 0)
	{
		if (b[i] == '0')
		{
			i--;
			power++;
		}
		else if (b[i] == '1')
		{
			n += (1 << power);
			i--;
			power++;
		}
		else
			return (0);
	}
	return (n);
}
