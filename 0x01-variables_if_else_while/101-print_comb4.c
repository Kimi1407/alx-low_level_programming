#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Description: using putchar function
 * Return: 0
 */
int main(void)
{
	int a, b, c;

	for (a = '25'; a < 34'; a++)
	{
		for (b = '26'; b < '34'; b++)
		{
			for (c = '27'; c < '34'; c++)
			{
				if (c > b && b > a)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					if (a != 32)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
