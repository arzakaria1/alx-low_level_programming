#include <stdio.h>

/**
 * main - prints sum of all multiples of 3 or 5 till 1024
 * Return: always (success)
 */

int main(void)
{
	int i, k = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	k += 1;
	}
	i++
	}
	printf("%d\n", k);
	return (0);
}
