#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int f;
	int t;

	for (f = 0; f < n--; f++)
	{
		t = a[f];
		a[f] = a[n];
		a[n] = t;
	}
}
