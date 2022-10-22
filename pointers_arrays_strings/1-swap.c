/*
 * Author: Onil
 * File: 1-swap.c
 */
#include "main.h"
/**
 * swap_int - Swaps the value of two integers
 * @a: An integer to swap, and when is used, it would be multiplied
 * @b: second integer to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swapped;

		swapped = *a;
		*a = *b;
		*b = swapped;
}




