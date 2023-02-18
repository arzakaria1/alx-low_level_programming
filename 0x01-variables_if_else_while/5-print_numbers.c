#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - displaying integers from zero to ten
 * Return: always (success)
 */
int main(void)
{
	int count;

	for (count = 0; count <= 10; count++)
	printf("%d", count);
	printf("\n");
	return (0);
}
