#include "main.h"

/**
 * _pow_recursion - returns value of x raised to y
 * @x: the base int
 * @y: the power to raise @x to
 * Return: the value of @x to power @y
 */

int _pow_recursion(int x, int y);
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, y - 1)));
}
