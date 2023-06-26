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
	int i = strlen(str);
	int ln = strlen(str);

	while (i < ln)
	{
	putchar(str[i]);
	i++;
	}

	putchar('\n');
}
