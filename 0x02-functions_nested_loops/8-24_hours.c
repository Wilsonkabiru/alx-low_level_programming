#include "main.h"

/**
* jack_baeur - A funcion that prints every minute of the day of Jack Baeur,
* starting from 00:00 to 23:59, min loop counts mins,
* while hour loop counts hours and resets mins.
*
* Description: A function that helps us track time.
*
* i = hour, j = minutes
*
* Return: 0
*/
void jack_baeur(void)
{

	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i + '0');
			}
			else if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			if (j < 10)
			{
				_putchar(':');
				_putchar('0');
				_putchar(j + '0');
			}
			else if (j > 10)
			{
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');

	}
}

