#include "main.h"

/**
 *print_alphabet - prints lowercase alphabets
 *Return: Always 0
 */

void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		_putchar(la);
	}

	putchar('\n');

	return (0);

}
