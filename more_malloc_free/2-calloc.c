/*
 * Author: Onil
 * File: 2-calloc.c
 */

#include "main.h"
#include <stdlib.h>

/**
 * _calloc - it allocates memory for an array of a certain number
 * of elements each of an inputted byte size
 *
 * @nmemb: number of elements
 * @size: The byte size of each array element
 *
 * Return: If nmemb = 0, alson the size = 0
 * if the function fails - NULL
 * Otherwise - a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	filler = memory;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (memory);
}
