/*
 * Auhtor: Onil
 * File: 1-alphabet.c
 */

#include "main.h"
/**
 * main - Write a function that prints
 * the alphabet, in lowercase, followed by a new line.
 * Return: Always 0
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)

	_putchar(alpha);

	_putchar('\n');
}
