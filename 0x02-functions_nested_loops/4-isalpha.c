#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: char to be checked
 *
 * Return: 1 if c is a letter, else return 0
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}

