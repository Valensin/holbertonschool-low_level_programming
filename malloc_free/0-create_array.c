/*
 * Author: Onil
 * File: 0_create_array.c
 */
#include "main.h"
#include <stdlib.h>

/**
 * create_array - it creates array of chars, also
 * initializes it with a specific char
 *
 * @size: the size of array to be created
 * @c: char to begin/start array with
 *
 * Return: pointer to the array, &/or NULL if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int x;
	char *i;

	if (size == 0)
		return (NULL);
	i = malloc(size * sizeof(char));
	if (i == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		i[x] = c;
	}
	return (i);
}
