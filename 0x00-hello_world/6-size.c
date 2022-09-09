#include <stdio.h>
/**
 * main - should print size of various types
 * Description: using the printf function
 * Return: 0
 */
int main(void)
{
	char age;
	int aged;
	long int ages;
	long long int ag;
	float agem;

	printf("Size of a char: %d byte(s)\n", sizeof(age));
	printf("Size of an init: %d byte(s)\n", sizeof(aged));
	printf("Size of a long init %d byte(s)\n", sizeof(long ages));
	printf("Size of a long long init %d byte(s)\n", sizeof(long long ag));
	printf("Size of a float %d byte(s)\n", sizeof(agem));
	return (0);
}

