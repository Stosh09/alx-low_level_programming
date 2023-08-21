#include "main.h"

/**
 * _memcpy - function copying memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: bytes being copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x = 0;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
