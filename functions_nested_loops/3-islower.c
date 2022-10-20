/*
 * Author: Onil
 * File: 3-islower.c
 */
#include "main.h"
/**
 * Main - Write a function that checks for lowercase character.
 * Returns: always 0 sucess
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else 
		return (0);
}

