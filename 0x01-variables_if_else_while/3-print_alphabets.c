#include <stdio.h>
#include <stdlib.h>
#include<time.h>
/**
 * main - a program to display the alphabets in lower and caps
 * Return: always (succes)
 */
int main(void)
{
	char low_caps;

	for (low_caps = 'a'; low_caps <= 'z'; low_caps++)
	putchar(low_caps);
	for (low_caps = 'A'; low_caps <= 'Z'; low_caps++)
	putchar(low_caps);
	putchar('\n');
	return (0);
}
