#include <stdio.h>
#include <string.h>

/**
 *puts_half - prints every other character of a string
 *@str: A pointer to an int that will be changed
 *
 *Return: void which means our answer is correct
 */

void puts_half(char *str)
{
	int i = strlen(str) / 2;
	int ln = strlen(str) - 1;

	while (i < ln)
	{
	if (strlen(str) % 2 == 0)
	{
		putchar(str[i]);
		i++;
	} else
	{
		putchar(str[i + 1]);
		i++;
	}
	}

	putchar('\n');
}
