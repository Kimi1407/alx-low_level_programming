#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Description: using printf
 * Return: 0
 */
int main(void)
{
	int b;
	unsigned long int c, d, next, sum;

	c = 1;
	d = 2;
	sum = 0;

	for (b = 1; b <= 33; ++b)
	{
		if (c < 4000000 && (c % 2) == 0)
		{
			sum = sum + c;
		}
		next = c + d;
		c = d;
		d = next;
	}

	printf("%lu\n", sum);

	return (0);
}
