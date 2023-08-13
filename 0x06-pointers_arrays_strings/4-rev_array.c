#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: array to be reversed
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i;
	int f;

	if (n % 2 == 0)
		n++
	for (i = 0; i != ((n - 1) / 2); i++)
	{
		f = a[(n - 1) - i];
		a[(n - 1) - i] = a[i];
		a[i] = f;
	}
}
