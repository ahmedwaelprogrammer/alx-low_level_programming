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
	char cl = 'a';
	char cu = 'A';

	while (cl <= 'z')
	{
		putchar(cl);
			cl++;
	}

	putchar('\n');

	while (cu <= 'Z')
	{
		putchar(cu);
		cu++;
	}

	return (0);
}
