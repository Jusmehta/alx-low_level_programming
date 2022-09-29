#include "main.h"

/**
 * primeFinder - checks if a number is prime
 * @a: number checked
 * @b: numbers to go through
 * Return: whether the number is prime or not
 */

int primeFinder(int a, int b)
{
	if (a <= 1 || a % b == 0)
		return (0);
	else if (a == b)
		return (1);
	else if (a > b)
		primeFinder(a, b + 1);
	return (1);
}

/**
 * is_prime_number - checks for prime numbers
 * @n: number to check
 * Return: 1 if @n is prime, 0 if otherwise
 */

int is_prime_number(int n)
{
	return (primeFinder(n, 2));
}
