/*
 * Author: Onil
 * File: 6-print_line.c
 */
#include "main.h"

/**
  * print_line - Draws a straight line according to parameter
  * @n: The number of lines to draw
  *
  * Return: empty
  */
void print_line(int n)
{
	int o;

	if (n <= 0)

	{
		_putchar('\n');
	}
	else
	{
		for (o = 0; o < n; o++)
		{_putchar(95);
		}
		_putchar('\n');
	}
}

