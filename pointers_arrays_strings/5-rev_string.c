/*
 * Author: Onil
 * File: 5-rev_string.c
 */

#include "main.h"

/**
  * rev_string - Reverses a string
  * @s: The string to reverse
  *
  * Return: void
  */
void rev_string(char *s)
{
	int x = 0, y = 0;
	char str[30];

	while (*(s + x))
	{
		*(str + x) = *(s + x);
		x++;
	}
	x = x - 1;
	while (x >= 0)
	{
		*(s + x) = *(str + y);
		y++;
		x--;
	}
}

