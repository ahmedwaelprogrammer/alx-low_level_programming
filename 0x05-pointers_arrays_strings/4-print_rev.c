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
	int i = strlen(s + 1);

	while ( i >= 0)
	{
		char lit = s[i];
		putchar(lit);
		lit = '';
		i--;
	}
	putchar('\n');
}
