/*
 * Auhtor: Onil
 * File: 1-alphabet.c
 */

#include "main.h"
/**
 * print_alphabet - Write a function that prints
 * the alphabet, in lowercase, followed by a new line.
 * void print_alphabet(void)
 * Return: print_alphabet(void)
 * print_alphabet: prints alphabet
 */


void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)

	_putchar(alpha);

	_putchar('\n');
}
