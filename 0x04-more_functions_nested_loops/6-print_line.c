#include "main.h"

/**
 * print_line - this prints a line
 * @n: integer parameter
 */
void print_line(int n)
{
	int x;


	if (n <= 0)
		_putchar('\n');
	for (x = 0; x <= n; x++)
		_putchar('_');
	_putchar('\n');
}
