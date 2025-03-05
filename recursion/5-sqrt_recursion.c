#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root for.
 * Return: The square root of n, or -1 if n does not have a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_calc(n, 0));
}

/**
 * sqrt_calc - calculate the square root recursively.
 * @n: The number to calculate the square root for.
 * @i: The current guess for the square root.
 * Return: The square root of n, or -1 if no natural square root exists.
 */
int sqrt_calc(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_calc(n, i + 1));
}
