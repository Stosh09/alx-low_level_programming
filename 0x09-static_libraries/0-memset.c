#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte
 * @n: first n bytes being filled
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;
	unsigned int z;

	for (z = 0; z < n; z++)
	{
		*ptr++ = b;
	}

	return (s);
}
