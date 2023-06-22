#include "main.h"

/**
 * _isupper - define if a character is uppercase
 *
 * Description: Prints the alphabet with _putchar
 * @c: charater
 * Return: void
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_putchar('1');
	} else
	{
		_putchar(c);
		_putchar(':');
		_putchar(' ');
		_putchar('0');
	}
	return (0);

}
