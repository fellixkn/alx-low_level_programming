#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - same function as puts()
 * @s: the string to be printed
 *
 * Return: 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(char *s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}
