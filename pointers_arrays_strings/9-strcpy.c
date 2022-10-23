/*
 * Author: Onil
 * File: 9-strcpy.c
 */

#include "main.h"

/**
 * _strcpy - it copies the string pointed to,
 * by src to buffer pointed to by dest
 *
 * @src: source to copy
 * @dest: destination of copy
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (*(src + x))
	{
		*(dest + x) = *(src + x);
		x++;
	}
	*(dest + x) = '\0';
	return (dest);
}

