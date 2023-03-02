#include "main.h"

/**
 * _strncpy - a function that copies a string.
 * @dest: destination string
 * @src: source string
 * @n: maximum bytes to be copied
 * Return: (pointer)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, srcLen = 0;

	while (src[i++])
	srcLen++;

	for (i = 0; src[i] && i < n; i++)
	dest[i] = src[i];

	for (i = srcLen; i < n; i++)
	dest[i] = '\0';

	return (dest);
}
