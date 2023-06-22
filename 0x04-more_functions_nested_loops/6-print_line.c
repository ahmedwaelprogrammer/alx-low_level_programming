#include "main.h"

/**
 * print_line - entry point
 *
 * Description: Prints lines
 *@n: number of lines
 * Return: void
 */

void print_line(int n)
{
	for (int i = 0; i < n; i++)
	{
		_putchar('_');
		if (i == (n - 1))
		{
			_putchar('\n');
		}
	}
}
