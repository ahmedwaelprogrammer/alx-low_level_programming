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
	int i = 0;

	while (i < 10)
	{
		if (i == 9)
		{
			putchar('0' + i);
			break;
		}
		putchar('0' + i);
		putchar(',');
		putchar(' ');
		i++;
	}

	return (0);
}
