/*
 * Auhtor: Onil
 * File: 2-print_alphabet_x10.c
 */

#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: void 0
 */

void print_alphabet_x10(void)
{
		char alpha;
	int x = 0;

	while (x <= 9)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}

	_putchar('\n');

	x++;
	}
}
