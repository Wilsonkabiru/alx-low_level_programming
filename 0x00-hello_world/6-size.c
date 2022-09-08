#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * Description: using the main function
 * this program prints "Programming is like building a multilingual puzzle"
 * Return: Always 0 
 */
int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("size of a char: %Ild byte(s)\n", sizeof(c));
	printf("size of an int: %Ild byte(s)\n", sizeof(i));
	printf("size of a long int: %Ild byte(s)\n", sizeof(li));
	printf("size of a long long int: %Ild byte(s)\n", (sizeof(lli)));
	printf("size of a float: %Ild byte(s)\n", sizeof(f));
	return (0);
}
