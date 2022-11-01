#ifndef HEADER_H
#define HEADER_H

/**
 * File: main.h
 * Author: Onil
 * Desc: Header contains prototypes for all functions
 * used in pointers_arrays_strings directory.
 */

#include <stddef.h>
int _putchar(char c);

void *_memset(void *s, int c, size_t n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);

unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);

void print_chessboard(char (*a)[8]);

void print_diagsums(int *a, int size);

void set_string(char **s, char *to);

#endif
