/*
 * Author: Onil
 * File: 0_strcat.c
 */

#include "main.h"

/**
  * _strcat - Concatenates the two strings
  *
  * @dest: The destination of string
  * @src: The source of string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int y = 0, x;

	while (dest[y])
	{
		y++;
	}

	for (x = 0; src[x] != 0; x++)
	{
		dest[y] = src[x];
		y++;
	}

	dest[y] = '\0';
	return (dest);
}

