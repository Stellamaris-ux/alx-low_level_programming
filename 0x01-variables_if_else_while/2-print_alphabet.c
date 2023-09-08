#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alphabet[a]);
	}
	putchar('\n');
	return (0);
}

