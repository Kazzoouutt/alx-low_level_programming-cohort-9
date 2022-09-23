#include "main.h"

/**
 * print_line - Draws a line using _
 * @n: The number of _ characters to be printed
 *
 * Return: Always 0
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; n++)
			_putchar('_');
	}

	_putchar('\n');
}
