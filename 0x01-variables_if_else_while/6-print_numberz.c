#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - a program that prints all single digits of base ten
 * Return: always (succes)
 */
int main(void)
{
	int k;

	for (k = '0'; k <= '9'; k++)
	putchar(k);
	putchar('\n');
	return (0);
}
