#include "main.h"

/**
 * _swap - swaps the values of two integers
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
