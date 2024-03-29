#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked -  a function that allocates memory using malloc.
 * @b: the size of memory to be allocated
 * Return: a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
