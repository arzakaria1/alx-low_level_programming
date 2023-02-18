#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - a program that displays the alphabets and omiting some
 * Return: always (success)
 */
int main(void)
{
	char lower, e, q;

	e = 'e';
	q = 'q';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
	if (lower != e && lower != q)
	putchar(lower);
	}
	putchar('\n');
	return (0);
}
