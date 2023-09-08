#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int a;
	int k;

	for (a = 48; a <= 56; a++)
	{
		for (k = 49; k <= 57; k++)
		{
			if (k > a)
			{
				putchar(a);
				putchar(k);
				if (a != 56 || k != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

