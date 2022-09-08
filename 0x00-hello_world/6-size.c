#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 (Success)
 */
int main(void)
{
        
	printf("size of a char: %Ild byte(s)\n", sizeof(char));
	printf("size of an int: %Ild byte(s)\n", sizeof(int));
	printf("size of a long int: %Ild byte(s)\n", sizeof(long int));
	printf("size of a long long init: %Ild byte(s)\n", sizeof(long long int));
	printf("size of a float: %Ild byte(s)\n", sizeof(float));
	return (0);

}
