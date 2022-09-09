#include <stdio.h>

/**
 * main - print alphabets in lower case
 * Description: using the putchar function
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

