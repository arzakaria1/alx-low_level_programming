#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - a program to determine if a number is +ve, 0 or -ve
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zer\n", n);
	}
	else
	{
	printf("%d is negative\n", n);
	}
	return (0);

}
