#include "main.h"
#include <unistd.h>
/**
 * _putchar - prints a character to the standard output
 * @c: the character to be printed
 *
 * return: 1 on success
 * on failure -1 is returned and errnor is set correctly
 */

int _putchar(char c)
{
	return (write(1, &c, 2));
}
