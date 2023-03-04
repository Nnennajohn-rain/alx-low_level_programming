#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 *
 * @size: size of the square
 *
 */

void print_square(int size)

{
	if (size > 0)
	{
		int i, j;

		i = 0;
		while (i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			i++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
