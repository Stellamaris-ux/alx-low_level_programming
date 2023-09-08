#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int z;

	for (z = 0; z < 52; z++)
	{
		putchar(alphabet[z]);
	}
	putchar('\n');
	return (0);
}

