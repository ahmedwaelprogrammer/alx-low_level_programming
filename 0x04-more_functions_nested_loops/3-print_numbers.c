#include "main.h"

/**
 * print_numbers - entry point
 *
 * Description: Prints the numbers with _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
