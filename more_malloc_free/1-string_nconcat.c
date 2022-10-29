/*
 * Author: Onil
 * File: 1-string_nconcat.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - it concatenates two strings, uses
 * an inputted number of bytes
 *
 * @s1: The first string
 * @s2: The second string
 *
 * @n: The maximum number of bytes of s2 to concatenate to s1
 *
 * Return: If the function fails - NULL
 * Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	x = malloc(sizeof(char) * (len + 1));

	if (x == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		x[len++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		x[len++] = s2[index];

	x[len] = '\0';

	return (x);
}
