#include "main.h"

/**
 * _islower - checks for lowercase character
 * @r: is the character to be checked
 *
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int r)
{
	if (r >= 'a' && r <= 'z')
		return (1);
	else
		return (0);
}

