#include "main.h"

/**
 * print_most_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void print_most_numbers(void)
{
	for (int i = '0'; i <= '9'; i++)
	{
		if (i == '2' || i == '4')
			i++;
		else
			_putchar(i);
	}
	_putchar('\n');
}
