#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @k: integer to swap
 * @j: integer to swap
 */

void swap_int(int *k, int *j)
{
	int m;

	m = *k;
	*k = *j;
	*j = m;
}

