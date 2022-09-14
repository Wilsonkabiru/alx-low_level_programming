#include "main.h"
/**
 *A function that prints last digit.
 *@n: takes in an integer.
 *Return: result output.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
