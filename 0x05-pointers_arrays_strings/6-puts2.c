#include <stdio.h>
#include <string.h>

/**
 *puts2 - prints every character of a string
 *@str: A pointer to an int that will be changed
 *
 *Return: void which means it is correct
 */

void puts2(char *str)
{
	int i = 0;
	int ln = strlen(str);

	while (i < ln)
	{
	if (i % 2 == 0)
	{
		i++;
	}
	if (str[i] == '\0')
	{
		break;
	}
	putchar(str[i]);
	i++;
	}
}
