#include<stdio.h>
/**
 * main - displaing the lower case alphabets in reverse
 * Return: always (success)
 */

int main(void)
{
	char reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse--)
	putchar(reverse);
	putchar('\n');
	return (0);
}
