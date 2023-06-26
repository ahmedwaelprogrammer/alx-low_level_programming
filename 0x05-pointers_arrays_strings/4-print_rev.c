#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse order
 *@s: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void print_rev(char *s)
{

	for (int i = strlen(s + 1); i >= 0; i--)
	{
		char lit = s[i];
		putchar(lit);
		lit = "";
	}
	putchar('\n');
}
