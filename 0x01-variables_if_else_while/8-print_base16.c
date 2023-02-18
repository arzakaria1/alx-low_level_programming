#include<stdio.h>
/**
 * main - a program that prints all the numbers of base sixteen
 * Return: always (success)
 */
int main(void)
{
	int k;
	char lower;

	for (k = '0'; k <= '9'; k++)
	putchar(k);
	for (lower = 'a'; lower <= 'f'; lower++)
	putchar(lower);
	putchar('\n');
	return (0);
}
