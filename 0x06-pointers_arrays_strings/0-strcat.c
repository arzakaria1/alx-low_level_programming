#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: a pointer back to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int d_len = 0, i;

	while (dest[d_len])
	{
	d_len++;
	}
	for (i = 0; src[i] != 0; i++)
	{
	dest[d_len] = src[i];
	d_len++;
	}
	dest[d_len] = '\0';
	return (dest);
}
