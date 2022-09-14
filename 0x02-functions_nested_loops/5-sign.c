#include "main.h"

/**
 * print_sign - A function that prints a sign of a number.
 *
 * Description: A function that prints signs of numbers.
 * @n: The number of which sign will be printed.
 * Return: 0
 */
int print_sign(int n)

{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n <  0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
