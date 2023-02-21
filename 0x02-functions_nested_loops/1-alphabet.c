#include "main.h"

/**
 *print_alphabet - prints lowercase alphabets
 *Return: On success 1
 */

void print_alphabet(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		_putchar(la);
	}

	putchar('\n');

}
