#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * @dest: one of the strings
 * @src: the other string
 * @n: length of the source string needed
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	size_t dest_len = strlen(dest);
	size_t i;

	for (i = 0; i < (size_t)n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + i] = '\0';

	return (dest);
}
