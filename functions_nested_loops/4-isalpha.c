/*
 * Auhtor: Onil
 * File: 4-isalpha.c
 */
#include "main.h"

/**
 * _isalpha - checks for an alphabetic character
 * @c: Characters are gonna be checked
 *
 * Return: 1 for alphabetic characters or 0 for antyhing else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else return (0);
}
