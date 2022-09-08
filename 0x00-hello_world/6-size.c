#include <stdio.h>

/**
 * main - Entry point
 * Return: Always o (Success)
 */
int main(void)
{
	char c;
	int i;
	long Ii;
	long long IIi;
	float f;

	printf("size of a char: %Id byte(s)\n", sizeof(c));
	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long int: %ld byte(s)\n", sizeof(Ii));
	printf("size of a long long int: %ld byte(s)\n", (sizeof(IIi));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}
