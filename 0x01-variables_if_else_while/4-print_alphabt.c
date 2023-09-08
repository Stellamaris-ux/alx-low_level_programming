#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Print all the letters except q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = 97; c < 123; c++)
	{
		if (c != 101 && c != 113)
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}

