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

char *string_toupper(char x[])
{
	int len = strlen(x);

	for (int i = 0; i < len; i++)
	{
		x[i] = toupper(x[i]);
	}

	return (x);
}
