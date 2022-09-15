#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size parameter of triangle
 * Return: returns nothing
 */

void print_triangle(int size)
{
	int 1;
	int 2;

		if (size > 0)
		{
			for (int 1 = 1; int 1 <= size; int 1++)
			{
				for ((int 2 = size - int 1); int 2 > 0; int 2--)
				{
					putchar(' ');
				}

				for (int 2 = 0; int 2 < int 1; int++)
				{
					putchar('#');
				}

				if (int 1 == size)
				{
					continue;
				}

				putchar('\n');
			}
		}
}
