#include "main.h"
#include <unistd.h>

/**
 * _putchar - wtites the character c to stdout
 * @c: the character c to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropirately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
