#include "main.h"
/**
 * jack_bauer-prints all minutes in a day from 00:00
 *
 * Return:0 if succeesful.
 */


void jack_bauer(void)
{
	int h, r, k, f;

	for (h = 0; h <= 2; h++)
	{
		for (r = 0; r <= 9; r++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (f = 0; f <= 9; f++)
				{
					if (h == 2 && r > 3)
					{break;
					}
					_putchar(h + '0');
					_putchar(r + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(f + '0');
					_putchar('\n');
				}
			}
		}
	}
}
