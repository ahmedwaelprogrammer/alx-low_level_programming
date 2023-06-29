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
	int arr[];
	int count = 0;

	for(int i = n; i >= 0; i--)
	{
		arr[count] = a[i];
		count++;
	}

	return (arr);
}
