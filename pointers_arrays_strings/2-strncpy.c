/*
 * Author: Onil
 * File: 2_strncpy.c
 */

#include "main.h"

/**
 * _strncpy - copy bytes of src to dest string
 * @dest: string to copy to
 * @src: string being copied
 * @n: largest number of bytes to copy
 *
 * Return: address of dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, z = 0;

	while (src[z])
	{
		z++;
	}

	while (x < n && src[x])
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}


