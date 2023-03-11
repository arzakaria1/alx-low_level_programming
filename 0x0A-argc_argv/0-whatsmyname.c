#include <stdio.h>
#include "main.h"

/**
 * main - displays name of program
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 * Return: alwayss (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
