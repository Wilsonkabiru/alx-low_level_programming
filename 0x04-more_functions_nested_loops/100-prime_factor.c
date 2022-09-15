#include <stdio.h>

/**
 * main - prints the largest prime factor
 * of a number
 * @n: the number being printed
 * Return: returns 0
 */

int main(void)
{
	n = 612852475143;
	unsigned long int i = 3;


	for (; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
