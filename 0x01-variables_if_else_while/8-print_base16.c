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
	int i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');

	return (0);
}
