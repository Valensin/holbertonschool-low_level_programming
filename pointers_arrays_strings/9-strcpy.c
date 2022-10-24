/*
 * Author: Onil
 * File: 9_strcpy.c
 */
#include "main.h"

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
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

