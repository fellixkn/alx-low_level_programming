#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number whose square root is to be returned
 *
 * Return: The natural square root of n
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt_recursion(n));
}
