#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int count = 0;

	while (count < 10)
	{

	while (c <= 'z')
	{
	_putchar(c);
	if (c == 'z')
	{
		c = 'a';
		break;
	}
		c++;
	}
	_putchar('\n');
	count++;
	}

}
