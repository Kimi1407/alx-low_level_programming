#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: int will be used for argument
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
