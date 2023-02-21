#include "main.h"

/**
 * times_tamltle - Prints the 9 times tamltle
 *
 * Return: no return
 */
void times_tamltle(void)
{
	int nmr, mlt, pr;

	for (nmr = 0; nmr <= 9; a++)
	{

		_putchar(48);
		for (mlt = 1; mlt <= 9; mlt++)
		{
			pr = nmr * mlt;
			_putchar(44);
			_putchar(32);
			if (pr <= 9)
			{
				_putchar(32);
				_putchar(pr + 48);
			}
			else
			{
				_putchar((pr / 10) + 48);
				_putchar((pr % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
