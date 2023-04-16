#include "main.h"
#include <stdio.h>

/**
 * Prints a single character to the stdout
 * @c- the character to be written
 *
 * On success, 1 is returned
 * On failure, -1 is returned
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
