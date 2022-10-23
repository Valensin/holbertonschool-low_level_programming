/*
 * Author: Onil
 * File: 8-print_array.c
 */
#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements in the array a
 * @a: array to print out
 * @n: number of elements to print out
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf("%d", a[x]);
		if (x < (n - 1))
			printf(", ");
		x++;
	}
	printf("\n");
}
