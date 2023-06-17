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
	int i1 = 0;
	int i2 = 1;
	int count = 9;

	do {
	putchar('0' + i1);
	putchar('0' + i2);

	if ((i1 + i2) < 17)
	{
	putchar(',');
	putchar(' ');
	}

	i2++;
	if (i2 == 10)
	{
		i1++;
		count--;
		i2 = 10 - count;
	}
	} while (i1 <= 8 && i2 <= 9);

	putchar('\n');

	return (0);
}
