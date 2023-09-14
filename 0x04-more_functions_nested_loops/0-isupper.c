#include "main.h"

/**
 * _isupper - function that checks for uppercase letters
 * @k: char to check
 *
 * Return: 0 or 1
 */

int _isupper(int k)
{
	if (k >= 'A' && k <= 'Z')
		return (1);
	else
		return (0);
}
