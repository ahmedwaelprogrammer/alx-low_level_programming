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
	int i = (strlen(str) / 2) - 1;
	int ln = strlen(str);

	while (i < ln)
	{
		if (str[i] == '\0')
		{
			break;
		}
	putchar(str[i]);
	i++;
	}

	putchar('\n');
}
