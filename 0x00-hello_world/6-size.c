#include <stdio.h>
/**
 * main - should print size of various types
 * Description: using the printf function
 * Return: 0
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an init: %d byte(s)\n", sizeof(init));
	printf("Size of a long init %d byte(s)\n", sizeof(long init));
	printf("Size of a long long init %d byte(s)\n", sizeof(long long init));
	printf("Size of a float %d byte(s)\n", sizeof(float));
	return (0);
}

