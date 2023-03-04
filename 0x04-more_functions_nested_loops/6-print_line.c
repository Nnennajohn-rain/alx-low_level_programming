#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: is the number of times
 *
 */

void print_line(int n)

{
	if (n > 0)
	{
		int i;

		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
