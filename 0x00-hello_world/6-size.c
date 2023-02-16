#include <stdio.h>
/**
* main - A program that displays the size of the various types of the computer it is compliled on
* Return: 0 (Success)
*/
int main(void)
{
char m;
int x;
long int y;
long long int z;
float k;

printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(m));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(z));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(k));
return (0);
}
