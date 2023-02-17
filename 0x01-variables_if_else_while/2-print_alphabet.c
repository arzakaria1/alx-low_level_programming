#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - displaying the english alphabets in lower case
 * Return: always (Success)
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	putchar(lower);
	putchar('\n');
	return (0);
}
