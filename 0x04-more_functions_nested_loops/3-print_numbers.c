#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints the numbers, from
 * 0 to 9
 * Return: 0
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	putchar(10);
}