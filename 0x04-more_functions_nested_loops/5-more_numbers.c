#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers to 14
 * Return: 0
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b2 = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar((b / 10) + '0');
			}
			_putchar((b % 10) + '0');
		}
		_putchar(10);
	}
}
