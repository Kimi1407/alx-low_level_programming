#include <stdio.h>
/**
 * main - should print sizes of types
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

	printf("Size of a char: %zu byte(s)\n", sizeof(age));
	printf("Size of an init: %zu byte(s)\n", sizeof(aged));
	printf("Size of a long init %zu byte(s)\n", sizeof(ages));
	printf("Size of a long long init %zu byte(s)\n", sizeof(ag));
	printf("Size of a float %zu byte(s)\n", sizeof(agem));
	return (0);
}

