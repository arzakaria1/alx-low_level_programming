#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse.
 * @s: the string to be displayed
 * Return: void;
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
	k++;
	}
	for (k -= 1; k >= 0; k--)
	{
	_putchar(s[k]);
	}
	_putchar('\n');
}
