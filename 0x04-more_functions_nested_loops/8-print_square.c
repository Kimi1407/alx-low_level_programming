#include <stdio.h>
#include "main.h"

/**
 * print_square - prints squares
 * @size: parameter
 * Return: 0
 */

void print_square(int size)
{
	int b, a;

	if (size > 0)
	{
		for (b = 0; b < size; b++)
		{
			for (a = 0; a < (size - 1); a++)
			{
				putchar('#');
			}

			putchar('#');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}
