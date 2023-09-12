#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x in lowercase
 * followed by a new line
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char k;
	int j;

	j = 0;

	while (j < 10)
	{
		k = 'a';
		while (k <= 'z')
		{
			_putchar(k);
			k++;
		}
		_putchar('\n');
		j++;
	}
}

