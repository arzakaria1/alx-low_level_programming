#include<stdio.h>
/**
 * main - a program that prints all combinations of single-digit numbers
 * Return: always (succes)
 */

int main(void)
{
	int k;
	
	for (k = '0'; k <= '9'; k++)
	{
	putchar(k);
	if (k != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
