#include "main.h"
#include <stdio.h>

/**
 * swap_int -  a function that swaps the values of two integers.
 * @a: first element to be swapped
 * @b: second element to be swapped
 * Return: always (success)
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
