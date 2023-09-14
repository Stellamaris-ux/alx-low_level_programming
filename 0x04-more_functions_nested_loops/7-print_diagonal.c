#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int u, v;

		for (u = 0; u < n; u++)
		{
			for (v = 0; v < n; v++)
			{
				if (v == u)
					_putchar('\\');
				else if (v < u)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}

