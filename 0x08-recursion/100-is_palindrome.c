#include "main.h"

int pal_checker(char *s, int i, int length);
int strlen_recursion(char *s);

/**
 * is_palindrome - a function that returns 1 if a string is
 * a palindrome and 0 if not.
 * @s: the string to be used
 * Return: 1 if s is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (pal_checker(s, 0, strlen_recursion(s)));
}

/**
 * strlen_recursion - returns the length of the string
 * @s: string which legth is to be determined
 * Return: (length of string)
 */

int strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + strlen_recursion(s + 1));
}

/**
 * pal_checker - checks the characters in the palindrome recursively
 * @s: the string to be determined
 * @i: the iterator
 * @length: length of the string
 * Return: 1 if palindrome, o otherwise
 */

int pal_checker(char *s, int i, int length)
{
	if (*(s + i) != *(s + length - 1))
		return (0);
	if (i >= length)
		return (1);
	return (pal_checker(s, i + 1, length - 1));
}
