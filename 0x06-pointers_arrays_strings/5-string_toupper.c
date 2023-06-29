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
	int len = 0;

	while (x[len] != '\0')
	{
		x[len] = toupper(x[len]);
		len++;

	}

	return (x);
}
