#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * Return: 0
 */

void puts2(char *str)
{
	int len, a;

	len = 0;

	while (str[len] != '\0')
	{
		len++
	}

	for (a = 0; a < len; a += 2)
	{
		putchar(str[a]);
	}

	putchar('\n');
}
