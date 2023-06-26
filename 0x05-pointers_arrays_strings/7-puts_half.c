#include <stdio.h>
#include <string.h>



void puts_half(char *str)
{
	int i = strlen(str)/2;
	int ln = strlen(str);

	while (i < ln+1)
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
