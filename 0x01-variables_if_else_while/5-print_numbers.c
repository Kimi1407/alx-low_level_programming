#include <stdio.h>

/**
 * main - print numbers 1 to 9
 * Description: using the putchar function
 * Return: 0
 */
int main(void)
{
        char n;

        for (n = '1'; n <= '9'; n++)
                putchar(n);
        putchar('\n');
        return (0);
}

