/*
 * Author: Onil
 * File: 3-strcmp.c
 */
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: outputs the difference of s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int b = 0;

	while (*(s1 + b) && *(s2 + b) && (*(s1 + b) == *(s2 + b)))
		b++;
	return (*(s1 + b) - *(s2 + b));
}

