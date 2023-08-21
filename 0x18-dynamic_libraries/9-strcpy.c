#include "main.h"

/**
 * *_strcpy - copies string pointed by src to dest
 * @dest: destination buffer
 * @src: source string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}
