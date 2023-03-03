#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array
 * @a: the array to be reversed
 * @n: number of elements in array
 * Return: none
 */

void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
	tmp = a[n - 1 - i];
	a[n - 1 - i] = a[i];
	a[i] = tmp;
	}
}
