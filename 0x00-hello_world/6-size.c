#include <stdio.h>
/**
 * main - should print sizes of types
 * Description: using the printf function
 * Return: 0
 */
int main(void)
{
	char oge;
	int ogec;
	long int oged;
	long long int og;
	float oges;

	printf("Size of a char: %zu byte(s)\n", sizeof(oge));
	printf("Size of an init: %zu byte(s)\n", sizeof(ogec));
	printf("Size of a long init: %zu byte(s)\n", sizeof(oged));
	printf("Size of a long long init: %zu byte(s)\n", sizeof(og));
	printf("Size of a float: %zu byte(s)\n", sizeof(oges));
	return (0);
}

