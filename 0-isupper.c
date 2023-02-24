#include "main.h"

/**
 * _isupper - checks if parameter is an uppercase character.
 * @c: char to check
 * Return: 1 if c is an uppercase character, 0 in other case.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
