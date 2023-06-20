#include <main.h>

/**
 * main - Entry point
 *
 * Desciption: A C program that prints with put function
 *
 * Return: Always 0 (Success)
 *
 * ptch function is to print putchar
 */

void ptch(char me)
{
	putchar(me);
}

int main(void)
{
	ptch('_');
	ptch('p');
	ptch('u');
	ptch('t');
	ptch('c');
	ptch('h');
	ptch('a');
	ptch('r');
	putchar("\n");
		return (0);
}
