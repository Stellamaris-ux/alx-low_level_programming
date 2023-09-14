#include "main.h"

/**
 * print_most_numbers - print numbers 0 tp 9, followed by a new line
 * do not print 2 and 4
 *
 * return: void
 */

void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (!(n == '2' || n == '4'))
			_putchar(n);
	}
	_putchar('\n');
}
