#include <unistd.h>

/**
 * _putchar - displays the character cin stdout
 * @c: is the charater to be displayed
 * Return: On success 1.
 * On error, -1 is returned, and error is set to vaule
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
