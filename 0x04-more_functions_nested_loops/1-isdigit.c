#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 throught 9)
 * @j: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int j)
{
	if (j >= '0' && j <= '9')
		return (1);
	else
		return (0);
}

