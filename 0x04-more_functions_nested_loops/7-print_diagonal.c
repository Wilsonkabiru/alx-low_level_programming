#include "main.h"

/**
 * print_diagonal - prints line
 * @size: integer parameters
 */
void print_diagonal(int size)
{
	int x;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (x = 0; x < size; x++)
		{
			for (i = 0; i <= x; i++)
				putchar(' ');
			putchar(92);
			_putchar('\n');
	}
}
