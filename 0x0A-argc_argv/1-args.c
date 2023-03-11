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
        (void) argv;
        printf("%d\n", argc - 1);
        return (0);
}
