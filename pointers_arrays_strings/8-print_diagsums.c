/*
 * Author: Onil
 * File: 8-print_diagsums.c
 */
#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Print the sum of two diagonals of square matrix
  *
  * @a: the matrix
  * @size: the size
  *
  * Return: Nothing.
  */
void print_diagsums(int *a, int size)
{
	int b, x = 0, y = 0;

	for (b = 0; b < size; b++)
	{
		x += a[(size + 1) * b];
		y += a[(size - 1) * (b + 1)];
	}
	printf("%d, %d\n", x, y);
}
