/*
 * Author: Onil
 * File: 5-print_numbers.c
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0
 */

	int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%i", x);

		x++;
	}
	printf("\n");
	return (0);
}

