#include <stdio.h>

/**
 * main - print numbers 1 to 9
 * Description: using the putchar function
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
        {
	putchar(n);
        }
	putchar('\n');
	return (0);
}

