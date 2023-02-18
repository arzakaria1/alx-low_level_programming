#include<stdio.h>
/**
 * main - a program that prints  possible different combinations of two digits.
 * Return: always (success)
 */
int main(void)
{
	int m, n;

	for (m = '0'; m < '9'; m++)
	{
	for (n = m + 1; n <= '9'; n++)
	{
	if (n != m)
	{
	putchar(m);
	putchar(n);
	if (m == '0' && m == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
