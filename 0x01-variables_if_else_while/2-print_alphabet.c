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
	char gg = 'a';

	while (gg <= 'z')
	{
		putchar(gg);
			gg++;
	}

	putchar('\n')

	return (0);
}
