#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the int to extract the last digit from
 *
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int k;

	if (i < 0)
	i = -i;

	k = i % 10;

	if (i < 0)
		i = -i;

	_putchar(i + '0');

	return (i);
}
