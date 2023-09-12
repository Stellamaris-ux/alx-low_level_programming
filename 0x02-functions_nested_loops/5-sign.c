#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @x: take int to be checked
 *
 * Return: 1 and prints + if x is greater than zero
 * Return: 0 and prints 0 if x is zero
 * Return: -1 and prints - if x is less than zero
 */
int print_sign(int x)
{
	if (x > 0)
	{
		_putchar('+');
		return (1);
	} else if (x == 0)
}
		_putchar(48);
		return (0);
	} else if (x < 0)
	{
		_putchar('-');
	}
		return (-1);
}
