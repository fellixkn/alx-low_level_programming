#include "main.h"
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    print_numbers();
    return (0);

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
