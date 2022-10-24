/*
 * Author: Onil
 * File: 9-strcpy.c
 */

#include "main.h"

/**
 * _strcpy - it copies the string pointed to,
 * by src to buffer pointed to by dest
 *
 * @src: source of value
 * @dest: destination of copy
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
    int a;

    for (a = 0; src[a] != '\0'; a++)
    {
        dest[a] = src[a];
    }

    dest[a++] = '\0';

    return (dest);
}

