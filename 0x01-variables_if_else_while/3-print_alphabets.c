#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * Description: using the putchar function
 * Return: 0
 */
int main(void)
{
	char c;
	for (c = 'a'; c<= 'z'; c++)
	{
		putchar(c);
	}

	for (c = 'A'; c<= 'Z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
