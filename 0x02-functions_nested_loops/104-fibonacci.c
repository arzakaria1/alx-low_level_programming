#include <stdio.h>

/**
 * main - displays the first 98 fibonnaci numbers
 * starting with 1 and 2, separated by a comma
 * Return: 0 always
 */

int main(void)
{
	int count;
	unsigned long fib_1 = 0, fib_2 = 1, sum;
	unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
	unsigned long half_1, half_2;

	for (count = 0; count < 92; count++)
	{
	sum = fib_1 + fib_2;
	printf("%ld, ", sum);
	fib_1 = fib_2;
	fib_2 = sum;
	}
	fib1_half1 = fib_1 / 10000000000;
	fib2_half1 = fib_2 / 10000000000;
	fib1_half2 = fib_1 % 10000000000;
	fib2_half2 = fib_2 % 10000000000;
	for (count = 93; count < 99; count++)
	{
	half_1 = fib1_half1 + fib2_half1;
	half_2 = fib1_half2 + fib2_half2;
	if (fib1_half2 + fib2_half2 > 9999999999)
	{
	half_1 += 1;
	half_2 %= 10000000000;
	}
	printf("%lu%lu", half_1, half_2);
	if (count != 98)
	printf(", ");
	fib1_half1 = fib2_half1;
	fib1_half2 = fib2_half2;
	fib2_half1 = half_1;
	fib2_half2 = half_2;
	}
	printf("\n");
	return (0);
}
