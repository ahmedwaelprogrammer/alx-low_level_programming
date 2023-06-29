#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 *reverse_array - revereses an array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 *
 *Return: void.
 */

void reverse_array(int *a, int n)
{
	int count = 0;
	int arrSave[n];

	for (int i = (n - 1); i >= 0; i--)
	{
		arrSave[count] = a[i];
		count++;
	}

	for (int i = 0; i <= 4; i++)
	{
		a[i] = arrSave[i];
	}

}
