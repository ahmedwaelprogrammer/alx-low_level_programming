#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Desciption: A C program that prints with put function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c = 'a';

	do {
		if (c == 'e' || c == 'q')
		{
			c++;
		}

		putchar(c);
		c++;
	} while (c <= 'z');

	putchar('\n');

	return (0);
}
