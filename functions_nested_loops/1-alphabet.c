/*
 * Auhtor: Onil
 * File: 1-alphabet.c
 */
#include <stdio.h>
#include "main.h"
/**
 * main - Write a function that prints the alphabet, in lowercase, followed by a new line.
 *
 * Return: Always 0
 */

int main (void)

{
	char x;

	for (x = 'a'; x <= 'z'; x++)
		putchar(x);

	putchar('\n');

	return (0);
}
