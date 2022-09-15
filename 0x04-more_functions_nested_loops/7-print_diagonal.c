#include "main.h"

/**
 * print_diagonal - prints line
 * @n: integer parameters
 */
void print_diagonal(int n)
{
	int x;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < n; x++)
			_putchar('\');
		_putchar('\n');
	}
}
