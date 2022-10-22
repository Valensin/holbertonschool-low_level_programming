/*
 * Author: Onil
 * File: 2-strlen.c
 */
#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: String's to count
  *
  * Return: the string length
  */
int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}

    return (a);
}

