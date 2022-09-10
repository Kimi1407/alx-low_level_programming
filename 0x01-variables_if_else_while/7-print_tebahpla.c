#include <stdio>

/**
 * main - prints the lowercase alphabet in reverse
 * Description: using the putchar function
 * Return: 0
 */
int main(void)
{
	char n;
	for (n = 'z'; n <= 'a'; n--)
	{
		putchar(n);
	}

	putchar("\n");
	return (0);
}
