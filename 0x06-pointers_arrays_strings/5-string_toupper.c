#include "main.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 *string_toupper - changes all lowercase letters of a string to uppercase.
 *@x: pointer to string.
 *
 *Return: pointer to uppercase string.
 */

char *string_toupper(char *ch)
{
	int len = strlen(ch);

	for (int i = 0; i < len + 1; i++)
	{
		ch[i] = toupper(ch[i]);
	}

	return (ch);
}
