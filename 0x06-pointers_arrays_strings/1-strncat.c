#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from src to dest
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, destLen = 0;

	while (dest[index++])
	destLen++;
	for (index = 0; src[index] && index < n; index++)
	dest[destLen++] = src[index];
	return (dest);
}
