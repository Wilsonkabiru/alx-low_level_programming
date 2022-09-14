#include "main.h"

/**
* jack_baeur - A funcion that prints every minute of the day of Jack Baeur,
* starting from 00:00 to 23:59, min loop counts mins,
* while hour loop counts hours and resets mins.
*
* Description: A function that helps us track time.
*
* h = hour, m = minutes
* Return: 0
*/
void jack_baeur(void)
{

int h;
int m;
for (h = 0; h < 24; h++)
{
for  (m = 0; m < 60; m++)
{
_putchar(h / 10 + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar(m / 10 + '0');
_putchar((m % 10) + '0');
_putchar('\n');
}
}
}
