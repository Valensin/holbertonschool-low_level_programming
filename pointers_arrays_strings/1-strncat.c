/*
 * Author: Onil
 * File: 1_strncat.c
 */

#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (dest[x])
	{
		x++;
	}

	while (y < n && src[y])
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x + n + 1] = '\0';

	return (dest);
}

