#include "main.h"
/**
 * print_last_digit - A function that prints last digit.
 *
 * Description: A function that prints last digits.
 * @n: takes in an integer.
 * Return: result output.
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
