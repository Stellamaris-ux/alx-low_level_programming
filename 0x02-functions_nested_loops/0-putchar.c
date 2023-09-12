#include "main.h"

/**
 * main - program that prints _putchar
 * followed by a new line
 *
 * Return: 0
 */

int main(void)
{
	char str[] = "_putchar";
	int a;

	for (a = 0; a < 8; ++a)
		_putchar(str[a]);
	_putchar('\n');

	return (0);
}
