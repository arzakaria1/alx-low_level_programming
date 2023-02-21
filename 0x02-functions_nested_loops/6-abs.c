#include "main.h"

/**
 * _abs - a function that computes the absolute value of an integer.
 * @c: the integer whose abs is to be computed
 * Return: Absolute value of an integer or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
