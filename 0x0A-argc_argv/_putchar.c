#include "main.h"
#include <stdio.h>

/**
 * _putchar - prints a character followed by a new line
 * @c: the character to be printed
 *
 * Return: On success 1 is returned
 * On failure, -1 is returned and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, -1));
}
