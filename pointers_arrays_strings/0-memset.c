#include "main.h"
/**
  * _memset - Fill memory with a constant byte
  * @s: memory area to fill
  * @c: constant byte to fill
  * @n: bytes of memory area to fill
  *
  * Return: the memory area filled
  */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
