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
	int ln = strlen(str);

	if (strlen(str) % 2 != 0)
	{
		ln--;
	}

	while(i < ln)
	{
	if (str[i] == '\0')
	{
		break;
	}
	if (strlen(str) % 2 == 0)
	{
		putchar(str[i]);
	}
	else if (strlen(str) % 2 != 0)
	{
		putchar(str[i+1]);
	}
		i++;
	}
		putchar('\n');
}
