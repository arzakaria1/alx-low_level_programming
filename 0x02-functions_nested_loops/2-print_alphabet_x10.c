#include "main.h"

/**
 * print_alphabet_x10 -  a function that prints 10 times the alphabet
 * Return: always (success0
 */

void print_alphabet_x10(void)
{
	char m;
	int i = 0;

	while (i <= 9)
	{
	for (m = 'a'; m <= 'z'; m++)
	{
	_putchar(m);
	}

	_putchar('\n');
	i++;
	}
}
